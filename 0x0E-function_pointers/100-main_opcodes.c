#include <stdio.h>
#include <stdlib.h>

/**
 * main - print opcodes of main function
 * @ac: count of command line arguments
 * @av: array of command line arguments
 *
 * Return: 0 (success)
 */
int main(int ac, char *av[])
{
	int num_bytes, i;
	char *opcode;

	/* Check if number of arguments is incorrect */
	if (ac != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(av[1]);
	/* Check if number of bytes is negative */
	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	/**
	 * use pointer to main to take advantage of function address,
	 * cast to make it printable and iterate through opcodes
	 */
	opcode = (char *)&main;
	for (i = 0; i < num_bytes; i++)
	{
		printf("%02hhx ", opcode[i]);
	}
	printf("\n");
	return (0);
}
