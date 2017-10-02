#include "holberton.h"
#include <stdio.h>

/**
 * main - prints sum of even Fibonacci numbers less than 4,000,000
 *
 * Return: 0 (success)
 */
int main(void)
{
	unsigned long int number;
	unsigned long int first;
	unsigned long int second;
	unsigned long int sum;
	unsigned long int total;

	number = 4000000;
	first = 1;
	second = 2;
	sum = first;
	total = 0;
	while (sum < number)
	{
		if (sum == 1)
		{
			sum = second;
		}
		else
		{
			if (sum % 2 == 0)
				total += sum;
			sum = first + second;
			first = second;
			second = sum;
		}
	}
	printf("%lu\n", total);
	return (0);
}
