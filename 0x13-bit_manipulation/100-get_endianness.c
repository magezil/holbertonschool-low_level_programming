#include "holberton.h"

/**
 * get_endianness - function checks endianness of system
 * Return: `0` if big endian, `1` if small endian
 */
int get_endianness(void)
{
	int i = 1;
	char *c = (char *)&i;

	/* check if stored 0001 or 1000*/
	if (*c == 0)
		return (0);
	else
		return (1);
}
