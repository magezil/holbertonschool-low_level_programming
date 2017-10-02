#include "holberton.h"

/**
 * _abs - compute absolute value of number
 * @n: number to be computed
 *
 * Return: absolute value of n
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-1 * n);
	}
}
