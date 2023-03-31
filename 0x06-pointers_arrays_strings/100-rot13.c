#include "main.h"
/**
 * rot13 - function that encodes a string using rot13.
 *
 * @o: input
 *
 * Return: output string
 */

char *rot13(char *o)
{
	int i, j;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; *(o + i); i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (a[j] == *(o + i))
			{
				*(o + i) = b[j];
				break;
			}
		}
	}
	return (o);

}
