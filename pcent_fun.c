#include "main.h"

/**
 *pcen_fun - prints one %
 * @args: variadic parameter
 *
 * Return: number of characters printed
 */

int pcent_fun(va_list args)
{
	(void)args;

	_putchar('%');

	return (1);
}
