#include "main.h"

/**
 * dec_fun - prints the decimal number gotten from va_arg to the stdout
 *@args: arguments which gaves user input from the variadic fun
 *
 *Return: number of characters printed if successful
 */

int dec_fun(va_list args)
{
	int i, count, number, num_arr[10];

	char c[1];
	
	i = count = 0;


	/* Get decimal number from variadic args */
	number = va_arg(args, int);

	/* Assign number to array by breaking it down */
	while (number != 0)
	{
		num_arr[i] = (number % 10);
		number = number / 10;
		if (number != 0)
			i++;
		else
			break;
	}

	/* Print content of array to standard output */
	while (i >= 0)
	{
		/* convert int to character */
		c[0] = ('0' + num_arr[i]);
		count += write(1, c, 1);
		i--;
	}
	return (count);
}
