#include"main.h"

/**
 * print_last_digit - print the last digit of n
 *
 * @n: input of the function
 *
 * Return: last digit
*/

int print_last_digit(int n)
{
	int ld;

	if (n < 0)
		ld = (-1) * (n % 10);
	else
		ld = n % 10;

	_putchar(ld + '0');
	return (ld);
}
