#include "holberton.h"

/**
 * _pow_recursion - compute the value of a number to the power of another
 *                  number
 * @x: value to compute the power
 * @y: value of the power to raise
 *
 * Return: value of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
