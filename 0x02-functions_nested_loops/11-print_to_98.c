#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers to 98
 * @n: starting number
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
		if (n > 98)
			n--;
		else
			n++;
	}
	printf("%d\n", 98);
}