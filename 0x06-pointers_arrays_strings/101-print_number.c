#include "main.h"
/**
 * print_number - function that prints an integer
 *
 * @n: input
 *
 * Return: void
 */

void print_number(int n)
{
	unsigned int nu;

	if (n < 10 && n >= 0)
	{
		_putchar('0' + n);
		return;
	}
	if (n < 0)
	{
		nu = -n;
		_putchar('-');
	}
	else
	{
		nu = n;
	}

	if (nu >= 10)
	{
		print_number(nu / 10);
	}
	_putchar((nu % 10) + '0');
}
