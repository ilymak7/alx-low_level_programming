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
	int ch2, ch3;

	while (ch <= 9)
	{
		ch2 = 0;
		while (ch2 <= 9)
		{
			ch3 = 0;
			while (ch3 <= 9)
			{
				if (ch != ch2 && ch < ch2 && ch2 != ch3 && ch2 < ch3)
				{
					putchar(ch + 48);
					putchar(ch2 + 48);
					putchar(ch3 + 48);

					 if (ch + ch2 + ch3 != 24)
					 {
						 putchar(',');
						 putchar(' ');
					 }
				}
				++ch3;
			}
			++ch2;
		}
		++ch;
	}
	putchar('\n');
	return (0);
}
