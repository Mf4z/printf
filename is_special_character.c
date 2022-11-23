#include "main.h"

/**
 * is_special_character - check the argument that is  character passed is and
 * compare it with the special character and
 *then return suitable function to the paramete
 *@format: the special character from the _prinf()
 *
 *Return: function pointer
 */

int (*is_special_character(const char *format))(va_list)
{
	int i = 0;

	/*This an array of struct initialization */
	func_t sc_array[6] = {
		{"c", char_fun},
		{"s", str_fun},
		{"%", pcent_fun},
		{"d", dec_fun},
		{"i", int_fun},
		{NULL, NULL}};

	/*
	*This will call the function suitable to the first index of array after
	*checking it against format
	 */
	while (sc_array[i].t != NULL)
	{
		if (*(sc_array[i].t) == *format)
			return (sc_array[i].f);
		i++;
	}

	return (NULL);
}
