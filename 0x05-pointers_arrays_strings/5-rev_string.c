#include"main.h"
/**
 * rev_string - stringin reverse
 *
 * @m : input
 *
 * Return: void
 */

void rev_string(char *m)
{
	int i, l;
	char ch;

	for (l = 0; m[l] != '\0'; ++l)
		;

	for (i = 0; i < l / 2; ++i)
	{
		ch = m[i];
		m[i] = m[l - 1 - i];
		m[l - 1 - i] = ch;
	}

}
