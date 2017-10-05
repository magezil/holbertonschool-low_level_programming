#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints minimum amount of coins needed for change
 * @argc: number of arguments given, should be 2
 * @argv: arguments given, should be change to be made
 *
 * Return: 0 (success) or 
 *         1 if 0 or more than 1 argument passed or given invalid number
 */
int main(int argc, char *argv[])
{
	int coins, cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	coins = 0;
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("Error\n");
		return (1);
	}
	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else
			cents -= 1;
		coins++;
	}
	printf("%d\n", coins);
	return (0);
}
