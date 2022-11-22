#include "main.h"
/**
  * _printf - function that prints anything
  *
  * @format: list of types of arguments passed to the function
  *
  * Return: Returns number of printed characters if successful
  * or -1 if error
  */
int _printf(const char *format, ...)
{
	va_list args;

	int i, char_count, char_no;

	int (*func_pointer)(va_list);

	i = char_count = char_no = 0;

	/* Check for empty format */
	if (format == NULL)
		return (-1);

	va_start(args, format);

	/* Check string literal is not at the end i.e '\0' */
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				break;

			func_pointer = is_special_character(&format[i + 1]);

			if (func_pointer != NULL)
			{
				char_no = func_pointer(args);
				char_count += char_no;
				i += 2;
			}
		}

		char_no = _putchar(format[i]);
		char_count += char_no;
		i++;
	}
	va_end(args);
	return (char_count);
}
