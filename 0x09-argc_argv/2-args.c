#include <stdio.h>

/**
 * main - print all arguments received
 * @argc: number of arguments given
 * @argv: arguments given
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
