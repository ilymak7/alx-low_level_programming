#include "variadic_functions.h"

/**
 * print_float - function that prints a float
 *
 * @arg: float args
 *
 * Return: None
*/

void print_float(va_list arg)
{
	float i = va_arg(arg, double);

	printf("%f", i);
}

/**
 * print_int - function that prints an int
 *
 * @arg: int args
 *
 * Return: None
*/

void print_int(va_list arg)
{
	int i = va_arg(arg, int);
	/* betty */
	printf("%d", i);
}

/**
 * print_char - function that prints an char
 *
 * @arg: char args
 *
 * Return: None
*/

void print_char(va_list arg)
{
	char i = va_arg(arg, int);
	/* betty */
	printf("%c", i);
}

/**
 * print_string - function that prints a string
 *
 * @arg: string args
 *
 * Return: None
*/

void print_string(va_list arg)
{
	char *i = va_arg(arg, char *);
	/* betty */
	if (i == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", i);
}

/**
 * print_all - function that prints all
 *
 * @format: list of types of arguments passed to the function
 *
 * Return: None
*/

void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, j = 0;
	char *separator = "";
	func_printer funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(ap, format);
	while (format && format[i])
	{
		j = 0;
		while (j < 4 && (format[i] != *(funcs[j].s)))
			j++;
		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].fp(ap);
			separator = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
