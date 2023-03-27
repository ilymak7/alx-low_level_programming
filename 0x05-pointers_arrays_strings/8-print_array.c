#include"main.h"
/**
 * print_array - print n element of arrat
 *
 * @n : elem
 * @m : array
 *
 * Return: void
 */

void print_array(int *m, int n)
{
	int i;

	for (i = 0; i < n; ++i)
	{
		if (i != (n - 1))
			printf("%d, ", m[i]);
		else
			printf("%d", m[i]);
	}
	printf("\n");
}
