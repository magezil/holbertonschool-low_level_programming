#include "holberton.h"

/**
 * _strchr - locate character in string
 * @s: string to search through
 * @c: character to find
 *
 * Return: first occurance of character or NULL if not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\0')
		return (s);
	return (0);
}
