#include "holberton.h"
#include <stdio.h>
#include <limits.h>

/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: 0 (success)
 */
int main(void)
{
	int number, count;
	unsigned long int first, first2, second, second2, sum, sum2, large;
	int overflow = 1;

	number = 98;
	first = 1;
	second = 2;
	sum = first + second;
	large = 10000000000000000;
	for (count = 0; count < number; count++)
	{
		if (count == 0)
			printf("%lu, ", first);
		else if (count == 1)
			printf("%lu, ", second);
		else if (first < (ULONG_MAX - second) && overflow)
		{
			sum = first + second;
			first = second;
			second = sum;
			printf("%lu, ", sum);
		}
		else
		{
			if (overflow)
			{
				first2 = first / large;
				first %= large;
				second2 = second / large;
				second %= large;
				overflow = !overflow;
			}
			sum = first + second;
			sum2 = first2 + second2;
			if (sum / large > 1)
			{
				sum2 += (sum / large);
				sum %= large;
			}
			printf("%lu%016lu", sum2, sum);
			if (count < number - 1)
				printf(", ");
			first = second;
			first2 = second2;
			second = sum;
			second2 = sum2;
		}
	}
	printf("\n");
	return (0);
}
