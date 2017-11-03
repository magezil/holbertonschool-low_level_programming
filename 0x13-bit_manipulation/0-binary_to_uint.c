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

	if (b == NULL)
		return (0);
	num = 0;
	while (*b != '\0')
	{
		num <<= 1;
		if (*b == '1')
			num |= 1;
		else if (*b != '0')
			return (0);
		b++;
	}
	return (num);
}
