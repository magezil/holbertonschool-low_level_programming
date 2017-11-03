#include "holberton.h"

/**
 * print_binary - function prints binary representation of an unsigned int
 * @n: number to convert
 */
void print_binary(unsigned long int n)
{
	if (n == 0 || n == 1)
	{
		_putchar('0' + n);
		return;
	}
	print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
