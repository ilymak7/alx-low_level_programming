#include"main.h"
/**
 * main - Entry point
 *
 * Description: print 1 - 100; for multiples of 3 print fizz
 * for multiles of 5 print buzz
 * for multiple of boths print fizzbuzz
 *
 * Return: 0 Always
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; ++i)
	{
		if (i % 3 == 0 && !(i % 5 == 0))
			printf("Fizz");
		else if (i % 5 == 0 && !(i % 3 == 0))
			printf("Buzz");
		else if (i % 5 == 0 && i % 3 == 0)
			printf("FizzBuzz");
		else
			printf("%d", i);
		if (i != 100)
			printf(" ");
		else
			printf("\n");
	}

	return (0);

}
