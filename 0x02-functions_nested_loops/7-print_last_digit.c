#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: number to be operated on
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
	int r = n % 10;

	if (n < 0)
		r *= -1;
	_putchar('0' + r);
	return (r);
}
