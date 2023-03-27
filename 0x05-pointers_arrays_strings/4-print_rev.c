#include"main.h"
/**
 * print_rev - print a stringin reverse
 *
 * @m : input
 *
 * Return: void
 */

void print_rev(char *m)
{
	int i;

	for (i = 0; m[i] != '\0'; ++i)
		;

	for (--i; i >= 0; --i)
		_putchar(s[i]);
	_putchar('\n');

}
