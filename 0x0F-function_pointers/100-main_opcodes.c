#include <string.h>
#include <stdio.h>
#include <stdlib.h>


/**
 * main- entry point
 *
 * Description: program that prints the opcodes of its own main function.
 *
 * @argc: arg count
 * @argv: arg vector
 *
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int i, nb;
	char *pt = (char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	nb = atoi(argv[1]);
	if (nb < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < nb; i++)
	{
		printf("%02x", pt[i] & 0xFF);
		if (i != nb - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
