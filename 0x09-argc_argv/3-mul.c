#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two numbers
 * @argc: number of arguments given
 * @argv: arguments given, should be two numbers
 *
 * Return: 0 if success
 *         1 if not given 2 arguments
 */
int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
