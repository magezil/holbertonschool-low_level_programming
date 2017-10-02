#include "holberton.h"

/**
 * print_number - prints given number
 * @n: number to print
 */
void print_number(int n)
{
	int div = 1;
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num = n * -1;
	}
	else
	{
		num = n;
	}

	while (num / div > 9)
		div *= 10;

	while (div != 0)
	{
		_putchar('0' + num / div);
		num %= div;
		div /= 10;
	}
}
