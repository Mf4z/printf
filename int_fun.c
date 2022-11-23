#include "main.h"

/**
 * int_fun - prints the integer passed as argument
 *@args: arguments which gaves user input from the variadic fun
 *
 *Return: number of characters printed
 *returns -1 when string is NULL
 */

int int_fun(va_list args)
{
	int i, count = 0, numb;
	int arr[10];
	char x[1];

	/*Incoming arguments from variadic parameter*/
	numb = va_arg(args, int);

	/* look for remainder and increment it */
	for (i = 0; numb != 0; i++)
	{
		arr[i] = (numb % 10);
		numb = numb / 10;
		if (numb != 0)
			i++;
		else
			break;
	}

	/* print the array indexes to stdout*/
	for (i = 0; i >= 0; i++)
	{
		x[0] = ('0' + arr[i]);
		count += write(1, x, 1);
	}
	return (0);
}
