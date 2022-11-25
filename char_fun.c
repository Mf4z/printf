#include "main.h"

/**
 *char_fun - prints the character passed as argment to the standard output
 *@args: variadic parameter
 *
 * Return: number of characters printed
 */

int char_fun(va_list args)
{
	char c = (char)va_arg(args, int);
	int count = 0;

	if (c)
	{
		count = _putchar(c);
		return (count);
	}
	return (0);
}
