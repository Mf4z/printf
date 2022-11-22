#include "main.h"

/**
 * str_fun - prints the string gotten from va_arg to the stdout one at a time
 *@args: arguments which gaves user input from the variadic fun
 *
 *Return: number of characters printed
 *returns -1 when string is NULL
 */

int str_fun(va_list args)
{
	int i, count = 0;
	char *str;

	str = va_arg(args, char *);
	if (str != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
			count = _putchar(str[i]);
		return (count);
	}
	return (-1);
}
