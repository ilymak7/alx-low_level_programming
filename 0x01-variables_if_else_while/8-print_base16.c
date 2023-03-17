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
	char CH = 'a';

	while (ch <= 9)
	{
		putchar(ch);
		++ch;
	}
	while (CH <= 'f')
	{
		putchar(CH);
		++CH;
	}
	putchar('\n');
	return (0);
}
