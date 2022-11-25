#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
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
	int (*func_pointer)(va_list);
	int i = 0;
	int char_count = 0;
	int char_no = 0;
	va_list args;
	va_start(args, format);

	/* Check for empty format */
	if (format == NULL)
		return (-1);

	/* Check string literal is not at the end i.e '\0' */
	while (format[i])
	{
		if (format[i] != '%')
		{
			char_no = write(1, &format[i], 1);	
			char_count += char_no;
			i++;
			continue;
		}
		if (format[i] == '%')
		{
			func_pointer = is_special_character(&format[i + 1]);

			if (func_pointer != NULL)
			{
				char_no = func_pointer(args);
				char_count += char_no;
				i += 2;
				continue;
			}
			if (format[i + 1] == '\0')
				break;
			if (format[i + 1] != '\0')
			{
				char_no = write(1, &format[i + 1], 1);
				char_count =  char_count + char_no;
				i = i + 2;
				continue;
			}
		}
	}
	return (char_count);
}
