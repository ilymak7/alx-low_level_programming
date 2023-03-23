#include"main.h"
/**
 * print_triangle - print a triangle
 *
 * @size: size of triangle
 *
 * Return: 0 Always
 */

void print_triangle(int size)
{
	int i, s;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; ++i)
		{
			for (s = 1; s <= size; ++s)
			{
				if ((i + s) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}

}
