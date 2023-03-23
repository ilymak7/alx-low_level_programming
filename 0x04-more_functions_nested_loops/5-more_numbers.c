#include"main.h"
/**
 * more_numbers - print numbers from 0 to 14 ; 10 times
 *
 * Return: 0 Always
 */

void more_numbers(void)
{
	int i, j, c;

	for (i = 1; i <= 10; ++i)
	{
		for (c = 0; c <= 14; ++c)
		{
			j = c;
			if (c > 9)
			{
				_putchar(1 + 48);
				j = c % 10;
			}
			_putchar(j + 48);
		}
		_putchar('\n');
	}

}
