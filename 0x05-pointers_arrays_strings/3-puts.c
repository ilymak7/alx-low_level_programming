#include"main.h"
/**
 * _puts - print a string followed by a new line
 *
 * @m : input
 *
 * Return: void
 */

void _puts(char *m)
{
	while (*m != '\0')
	{
		_putchar(*m + 0);
		++m;
	}
	_putchar('\n');

}
