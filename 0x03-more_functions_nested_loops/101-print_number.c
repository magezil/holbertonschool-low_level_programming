#include "holberton.h"

/**
 * print_number - prints a number using _putchar
 * @n: number to print
 */
void print_number(int n)
{
	int tens = 1;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while (n / tens >= 10)
		tens *= 10;
	while (tens > 0)
	{
		_putchar((n / tens) + '0');
		n %= tens;
		tens /= 10;
	}
}
