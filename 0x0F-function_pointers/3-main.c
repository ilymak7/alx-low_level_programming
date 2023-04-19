#include "3-calc.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: Function that takes in 2 variables and operator
 * then applies the operator
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0 on sucess
*/

int main(int argc, char *argv[])
{
	int a, b;
	char *op;
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2];
	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if((*op == 47 || *op == 37) && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(a, b));
	return (0);
}
