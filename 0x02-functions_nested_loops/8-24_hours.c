#include"main.h"

/**
 * jack_bauer - prints every minute of the day
*/

void jack_bauer(void)
{
	int m, h;

	for (h = 0; h < 24; ++h)
	{
		for (m = 0; m < 60; ++m)
		{
			_putchar((h / 10) + 48);
			_putchar((h % 10) + 48);
			_putchar(':');
			_putchar((m / 10) + 48);
			_putchar((m % 10) + 48);
			_putchar('\n');
		}
	}
}
