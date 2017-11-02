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
	unsigned long int i;

	mask = 1;
	for (i = 0; i < index; i++)
	{
		if (mask > mask << 1)
			return (-1);
		mask = mask << 1;
	}
	mask = ~mask;
	*n = mask & *n;
	return (1);
}
