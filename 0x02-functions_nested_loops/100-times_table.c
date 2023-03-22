#include"main.h"

/**
 * print_times_table - print the times table of n
 *
 * @n: input number
*/

void print_times_table(int n)
{
	int ni, m, p;

	if (n <= 15 && n >= 0)
	{
		for (ni = 0; ni <= n; ++ni)
		{
			_putchar(48);
			for (m = 1; m <= n; ++m)
			{
				_putchar(',');
				_putchar(' ');
				p = ni * m;
				if (p <= 9)
					_putchar(' ');
				if (p <= 99)
					_putchar(' ');
				if (p >= 100)
				{
					_putchar((p / 100) + 48);
					_putchar((p / 10) % 10 + 48);
				}
				else if (p <= 99 && p >= 10)
					_putchar((p / 10) + 48);
				_putchar((p % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
