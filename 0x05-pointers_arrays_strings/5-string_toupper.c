#include "holberton.h"

/**
 * string_toupper - converts all lowercase letters to uppercase
 * @s: string to change
 *
 * Return: converted string
 */
char *string_toupper(char *s)
{
	int upper;
	int i;

	upper = 'a' - 'A';
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= upper;
	}
	return (s);
}
