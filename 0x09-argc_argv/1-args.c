#include <stdio.h>

/**
 * main - print number of arguments passed
 * @argc:  number of arguments given
 * @argv:  arguments given
 *
 * Return: Always 0 (success)
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
