#include "holberton.h"
#include <stdio.h>

/**
 * main - prints the Fibonacci numbers less than 4,000,000
 *
 * Return: 0 (success)
 */
int main(void)
{
	unsigned long int number;
	unsigned long int first;
	unsigned long int second;
	unsigned long int sum;

	number = 4000000;
	first = 1;
	second = 2;
	sum = first;
	while (sum < number)
	{
		if (sum == 1)
		{
			printf("%lu, ", first);
			sum = second;
		}
		else
		{
			printf("%lu", sum);
			sum = first + second;
			first = second;
			second = sum;
			if (sum < number)
				printf(", ");
		}
	}
	printf("\n");
	return (0);
}
