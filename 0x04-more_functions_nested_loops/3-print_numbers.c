#include"main.h"
/**
 * print_numbers - print numbers using _putchar
 *
 * Return: 0 Always
 */

void print_numbers(void)
{
	int i = 0;

	do {
		_putchar(i + 48);
		i++;
	} while (i >= 0 && i <= 9)
	_putchar('\n');
}
