#include"main.h"
/**
 * print_diagonal - print a diagonal line
 *
 * @n: line length
 *
 * Return: 0 Always
 */

void print_diagonal(int n)
{
	int i, s;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (s = 0; s < i; s++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}

}
