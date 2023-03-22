#include"main.h"

/**
 * main - Entry point
 *
 * Description: sum of multiples of 3 and 5
 *
 * Return: Always 0
*/

int main(void)
{
	int s, n;

	s = 0;

	for (n = 0; n < 1024; ++n)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
			s += n;
	}
	printf("%d\n", s);

	return (0);
}
