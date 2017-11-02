#include "holberton.h"

/**
 * print_binary - function prints binary representation of an unsigned int
 * @n: number to convert
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask;

	mask = 1;
	while (mask < n)
		mask = mask << 1;
	if (n != 0 && mask > n)
		mask = mask >> 1;
	while (mask > 0)
	{
		if ((mask & n) > 0 )
			_putchar('1');
		else
			_putchar('0');
		mask = mask >> 1;
	}
}
