#include"main.h"

/**
 * main - Entry point
 *
 * Description: 50 fib numbers
 *
 * Return: Always 0
*/

int main(void)
{
	float c;
	unsigned long f1 = 0, f2 = 1, s;


	while (1)
	{
		s = f1 + f2;

		if (s > 4000000)
			break;
		if ((s % 2) == 0)
			c += s;
		f1 = f2;
		f2 = s;
	}
	printf("%.0f\n", c);

	return (0);
}
