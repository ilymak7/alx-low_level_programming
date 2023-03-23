#include<stdio.h>
/**
 * _sqrt - helper function  to find the sqrt
 *
 * @x : input
 *
 * Return: sqrt of x
 */

double _sqrt(double x)
{
	float s, t;

	s = x / 2;
	t = 0;

	while (s != t)
	{
		t = s;
		s = (x / t + t) / 2;
	}
	return (s);
}

/**
 * largest_p - find the largest prime factor of n
 *
 * @n : input number
 *
 * Return: 0
 */

void largest_p(long int n)
{
	int p, l;

	while (n % 2 == 0)
		n = n / 2;

	for (p = 3; p <= _sqrt(n); p += 2)
	{
		while (n % p == 0)
		{
			n = n / p;
			l = p;
		}
	}
	if (n > 2)
		l = n;
	printf("%d\n", l);

}


/**
 * main - Entry point
 *
 * Return: 0 Always
 */

int main(void)
{
	largest_p(612852475143);

	return (0);
}
