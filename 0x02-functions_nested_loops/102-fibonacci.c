#include "holberton.h"
#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: 0 (success)
 */
int main(void)
{
	int number;
	int count;
	unsigned long int first;
	unsigned long int second;
	unsigned long int sum;

	number = 50;
	first = 1;
	second = 2;
	for (count = 1; count < number; count++)
	{
		if (count == 1)
			printf("%lu, ", first);
		else if (count == 2)
			printf("%lu, ", second);
		else
		{
			sum = first + second;
			printf("%lu, ", sum);
			first = second;
			second = sum;
		}
	}
	printf("%lu\n", (first + second));
	return (0);
}
