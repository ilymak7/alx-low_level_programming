#include"main.h"
/**
 * print_square - print a square
 *
 * @size: size of square
 *
 * Return: 0 Always
 */

void print_square(int size)
{
	int i, s;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; ++i)
		{
			for (s = 1; s <= size; ++s)
				_putchar('#');
			_putchar('\n');
		}
	}

}
