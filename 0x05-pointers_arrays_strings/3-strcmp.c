#include "holberton.h"

/**
 * _strcmp - compare two strings
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: negative number if s1 is less than s2
 *         positive number if s1 is greater than s2
 *         0 if s1 matches s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
			break;
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
