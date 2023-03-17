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
	int ch = 48;

	while (ch <= 102)
	{
		putchar(ch);
		if (ch == 57)
			ch += 39;
		++ch;
	}
	putchar('\n');
	return (0);
}
