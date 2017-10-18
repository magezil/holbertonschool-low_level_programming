#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - program that performs simple operations
 * @ac: number of arguments given on command line
 * @av: array of pointers to each argument
 *
 * Return: Always 0 (success)
 */
int main(int ac, char *av[])
{
	int (*f)(int, int);
	int a, b;

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}

	f = get_op_func(av[2]);
	/* Check for invalid operator */
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(av[1]);
	b = atoi(av[3]);
	/* Check for divide or mod by 0 */
	printf("%d\n", f(a, b));
	return (0);
}
