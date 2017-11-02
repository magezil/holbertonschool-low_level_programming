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
	unsigned long int i;

	mask = 1;
	for (i = 0; i < index; i++)
	{
		if (mask > mask << 1)
			return (-1);
		mask = mask << 1;
	}
	if ((mask & n) > 0)
		return (1);
	else
		return (0);
}
