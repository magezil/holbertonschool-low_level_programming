#include "holberton.h"

/**
 * set_bit - function sets the value of a bit to `1` at given index
 * @n: number to get bit from
 * @index: index of bit to set to 1
 *
 * Return: 1 if success or -1 if fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (n == NULL)
		return (-1);
	if (index >= (sizeof(n) * NUM_BYTES))
		return (-1);
	mask = 1 << index;
	*n = mask | *n;
	return (1);
}
