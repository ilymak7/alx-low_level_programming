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
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		++ch;
	}
	putchar('\n');
	return (0);
}
