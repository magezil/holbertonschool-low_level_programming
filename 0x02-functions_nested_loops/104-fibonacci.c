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
	int count, overflow = 1;
	unsigned long int first = 1, first2, second = 2, second2, sum, sum2;
	unsigned long int large = 10000000000000000;

	printf("%lu, %lu, ", first, second);
	for (count = 2; count < 98; count++)
	{
		if (first < (ULONG_MAX - second) && overflow)
		{
			sum = first + second;
			first = second;
			second = sum;
			printf("%lu, ", sum);
			continue;
		}
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
		if (count < 97)
			printf(", ");
		first = second;
		first2 = second2;
		second = sum;
		second2 = sum2;
	}
	printf("\n");
	return (0);
}
