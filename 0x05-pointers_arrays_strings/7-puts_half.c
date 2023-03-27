#include"main.h"
/**
 * puts_half - print half a string
 *
 * @m : input
 *
 * Return: void
 */

void puts_half(char *m)
{
	int i, n;

	for (i = 0; m[i] != '\0'; ++i)
		;
	if (i % 2 == 0)
	{
		for (n = i / 2; m[n] != '\0'; ++n)
			_putchar(m[n]);
	} else
	{
		for (n = ((i - 1) / 2) + 1; m[n] != '\0'; ++n)
			_putchar(m[n]);
	}
	_putchar('\n');
}
