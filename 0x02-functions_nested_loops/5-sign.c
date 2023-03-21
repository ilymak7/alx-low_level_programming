#include"main.h"

/**
 * print_sign - print sign of n
 *
 * @n: input of the function
 *
 * Return: +1 if n is positive , -1 if n is negative and
 *	otherwise 0
*/

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar(43 + 0);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0 + 48);
		return (0);
	}
	else
	{
		_putchar(45 + 0);
		return (-1);
	}
}
