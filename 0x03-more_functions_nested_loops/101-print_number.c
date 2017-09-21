#include "holberton.h"

/**
 * print_number - prints a number using _putchar
 * @n: number to print
 */
void print_number(int n)
{
	unsigned int un;
	int tens = 1;

	if (n < 0)
	{
		un = -n;
		_putchar('-');
	}
	else
	{
		un = n;
	}
	while (un / tens >= 10)
		tens *= 10;
	while (tens > 0)
	{
		_putchar((un / tens) + '0');
		un %= tens;
		tens /= 10;
	}
}
