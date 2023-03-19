#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabet letters
 *
 * Return: Always O (Success)
*/

int main(void)
{
	int ch = 0;
	int ch2;

	while (ch <= 99)
	{
		ch2 = ch;
		while (ch2 <= 99)
		{
			if (ch2 != ch)
			{
				putchar((ch / 10) + 48);
				putchar((ch % 10) + 48);
				putchar(' ');
				putchar((ch2 / 10) + 48);
				putchar((ch2 % 10) + 48);

				if (ch != 98 || ch2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			++ch2;
		}
		++ch;
	}
	putchar('\n');

	return (0);
}
