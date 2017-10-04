#include "holberton.h"

int _sqrt_recursion_helper(int n, int d);

/**
 * _sqrt_recursion - compute the natural square root of a number
 * @n: number to find the square root of
 *
 * Return: square root of number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt_recursion_helper(n, n - 1));
}

/**
 * _sqrt_recursion_helper - recursive helper function to calculate square root
 * @n: number to calculate square root of
 * @d: number to try
 *
 * Return: square root of number
 */
int _sqrt_recursion_helper(int n, int d)
{
	if (d == 1)
		return (-1);
	if (n % d == 0 && n / d == d)
		return (d);
	return (_sqrt_recursion_helper(n, d - 1));
}
