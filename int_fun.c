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
	int i = 0, count = 0;
	int numb;
	int arr[10];
	char x[1];

	/*Incoming arguments from variadic parameter*/
	numb = va_arg(args, int);

	/* look for remainder and increment it */
	while (numb != 0)
	{
		arr[i] = (numb % 10);
		numb = numb / 10;
		if (numb == 0)
			break;
		else 
			i++;
	}
	
	/* print the array indexes to stdout*/
	while (i >= 0)
	{
		x[0] = ('0' + arr[i]);
		count += write(1, x, 1);
		i--;
	}
	return (count);
}
