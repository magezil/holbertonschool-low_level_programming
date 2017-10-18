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

	/* Check for divide or mod by 0 */
	if ((*av[2] == '/' || *av[2] == '%') && atoi(av[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", f(atoi(av[1]), atoi(av[3])));
	return (0);
}
