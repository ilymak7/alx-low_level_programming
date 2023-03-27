#include"main.h"
/**
 * puts2 - print a string
 *
 * @m : input
 *
 * Return: void
 */

void puts2(char *m)
{
	int i;

	for (i = 0; m[i] != '\0'; ++i)
	{
		if (i % 2 == 0)
			_putchar(m[i]);
	}
	_putchar('\n');
}
