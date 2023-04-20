#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct print - function printer
 *
 * @s: dtype
 * @fp: function pointer
*/

typedef struct print
{
	char *s;
	void (*fp)(va_list arg);
} func_printer;

#endif /* VARIADIC_FUNCTIONS_H */
