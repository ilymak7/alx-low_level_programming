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
	int ch = 0, ch2;

	while (ch <= 9)
	{
		ch2 = 0;
		while (ch2 <= 9)
		{
			if (ch != ch2 && ch < ch2)
			{
				putchar(ch + 48);
				putchar(ch2 + 48);
				if (ch + ch2 != 17)
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
