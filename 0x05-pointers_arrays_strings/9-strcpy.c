#include"main.h"
/**
 * _strcpy - copy a string form src to dest
 *
 * @src : source str
 * @dest : destination string
 *
 * Return: void
 */

char *_strcpy(char *dest, char *src)
{
	int a, b = 0;

	for (a = 0; src[a] != '\0'; ++a)
	{
		dest[b] = src[a];
		++b;
	}
	dest[b] = '\0';

	return (dest);
}
