#include "holberton.h"

/**
 * get_bit - function returns the value of a bit at given index
 * @n: number to get bit from
 * @index: index of bit to return
 *
 * Return: value of bit or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(n) * NUM_BYTES))
		return (-1);
	mask = 1 << index;
	if ((mask & n) > 0)
		return (1);
	return (0);
}
