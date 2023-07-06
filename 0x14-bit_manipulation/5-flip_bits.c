#include "main.h"

/**
 * flip_bits - a function that returns the number of bits you would
 * need to flip to get from one number to another.
 * @n: a number.
 * @m: a number.
 * Return: a number.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int f = n ^ m, i = 0;

	while (f > 0)
	{
		i += (f & 1);
		f >>= 1;
	}
	return (i);
}
