#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print numbers
 *
 * Return: Always O (Success)
*/

int main(void)
{
	int dig = 0;

	while (dig  <= 9)
	{
		putchar(dig + '0');
		++dig;
	}
	putchar('\n');
	return (0);
}
