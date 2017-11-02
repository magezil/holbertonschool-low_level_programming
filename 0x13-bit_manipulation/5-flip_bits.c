#include "holberton.h"

/**
 * flip_bits - function returns the number of bits to flip to get from
 * one number to the next
 * @n: number to convert
 * @m: number to get to
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask;
	unsigned int count;

	mask = n ^ m;
	count = 0;
	while (mask > 0)
	{
		/* check if last digit is 1 */
		if (mask & 1)
			count++;
		mask = mask >> 1;
	}
	return (count);
}
