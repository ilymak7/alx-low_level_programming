#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b:  pointing to a string of 0 and 1 chars.
 * Return:  the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0, p = 1;
	int l;

	if (b == NULL)
		return (0);
	for (l = 0; b[l];)
		l++;
	for (l -= 1; l >= 0; l--)
	{
		if (b[l] != '0' && b[l] != '1')
			return (0);
		n += (b[l] - '0') * p;
		p *= 2;
	}
	return (n);
}
