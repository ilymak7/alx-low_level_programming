#include"main.h"

/**
 * main - Entry point
 *
 * Description: prints _putchar using putchar proto
 *
 * Return: 0 Always (Success)
*/

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ++ch)
		_putchar(ch);
	_putchar('\n');
	return (0);
}
