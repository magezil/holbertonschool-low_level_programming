#include "holberton.h"
#include <stdio.h>
/**
 * print_number - prints given number
 * @n: number to print
 */
void print_number(int n)
{
	int div = 1;

	if (n < 0)
	{
		_putchar('-');
		div = -1;
	}
	
	while (n / div > 9)
		div *= 10;

	while (div != 0)
	{
		_putchar('0' + n / div);
		n %= div;
		if (n > 0 && div < 0)
			div *= -1;
		div /= 10;
	}
}
