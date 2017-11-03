#include "holberton.h"

/**
 * clear_bit - function sets the value of a bit to `0` at given index
 * @n: number to get bit from
 * @index: index of bit to set to 0
 *
 * Return: 1 if success or -1 if fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (n == NULL)
		return (-1);
	if (index >= (sizeof(n) * NUM_BYTES))
		return (-1);
	mask = 1 << index;
	*n &= (~mask);
	return (1);
}
