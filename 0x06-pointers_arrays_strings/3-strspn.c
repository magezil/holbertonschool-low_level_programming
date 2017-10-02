#include "holberton.h"

/**
 * _strspn - get length of prefix substring
 * @s: string to check
 * @accept: letters in prefix
 *
 * Return: number of bytes in beginning of s that are bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int count;

	count = 0;
	while (s[count] != '\0')
	{
		if (_strchr(accept, s[count]) != 0)
			count++;
		else
			break;
	}
	return (count);
}

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
	return (NULL);
}
