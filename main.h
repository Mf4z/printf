#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

int _printf(const char *format, ...);
int _putchar(char c);
int (*is_special_character(const char *format))(va_list);

/**
 *struct func - struct that save special characters and their functions
 *@t: character to be compared
 *@f: function that print to the standard output
 *
 */

typedef struct func
{
	char *t;
	int (*f)(va_list);
} func_t;

int char_fun(va_list);
int str_fun(va_list);
int pcent_fun(va_list);
#endif
