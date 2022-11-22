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

	i = char_count = char_no = 0;

	/* Check for empty format */
	if (format == NULL)
		return (-1);

	va_start(args, format);

	/* Check string literal is not at the end i.e '\0' */
	while (format[i] != '\0')
	{
		char_no = _putchar(format[i]);
		char_count += char_no;
		i++;
	}

	va_end(args);

	return (char_count);
}
