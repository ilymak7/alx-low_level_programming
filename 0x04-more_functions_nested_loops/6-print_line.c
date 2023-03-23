#include"main.h"
/**
 * print_line - print  a straight line
 *
 * @n: line length
 *
 * Return: 0 Always
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; ++i)
			_putchar('_');
		_putchar('\n');
	}

}
