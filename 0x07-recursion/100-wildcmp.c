#include "holberton.h"

/**
 * wildcmp - compares two strings to see if identical
 * @s1: first string to compare
 * @s2: second string to compare, could have wildcard *
 *      Note: * can replace any string, including an empty string
 *
 * Return: 1 if strings are identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		/* Find if last character of s2 is a * or not */
		if (*s2 != '\0' && *s2 == '*')
			return (wildcmp(s1, s2 + 1));
		return (*s2 == '\0');
	}
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	if (*s2 == '*')
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));

	return (0);
}
