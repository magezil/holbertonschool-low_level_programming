#include "holberton.h"

/**
 * binary_to_uint - function converts a binary number to an unsigned int
 * @b: pointer to string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	unsigned int two;
	int index;

	if (b == NULL)
		return (0);
	index = 0;
	while (*b != '\0')
	{
		if (!(*b == '0' || *b == '1'))
			return (0);
		index++;
		b++;
	}
	num = 0;
	two = 1;
	while (index > 0)
	{
		b--;
		num += two * (*b - '0');
		index--;
		two *= 2;
	}
	return (num);
}
