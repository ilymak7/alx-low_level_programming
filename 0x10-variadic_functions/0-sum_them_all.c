#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters.
 *
 * @n: number of variables
 *
 * Return: Sum of n variables
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int args, s = 0;
	va_list ap;

	va_start(ap, n);
	for (args = 0; args < n; args++)
	{
		s += va_arg(ap, int);
	}
	va_end(ap);
	return (s);

}
