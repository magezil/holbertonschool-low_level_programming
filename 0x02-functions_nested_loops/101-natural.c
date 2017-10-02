#include "holberton.h"
#include <stdio.h>

/**
 * main - print sum of natural numbers that are multiples of 3 and 5 under 1024
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	int end;
	int sum;

	end = 1024;
	sum = 0;
	for (i = 1; i < end; i++)
	{
		if (i % 3 == 0)
			sum += i;
		else if (i % 5 == 0)
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
