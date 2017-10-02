#include "holberton.h"

/**
 * _strstr - find a needle in a haystack, aka locate substring
 * @haystack: string to be searched
 * @needle: substring to find
 *
 * Return: pointer to beginning of located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack != '\0')
	{
		i = 0;
		haystack = _strchr(haystack, needle[0]);
		while (*(haystack + i) == *(needle + i) && *(needle + i) != '\0')
			i++;
		if (*(needle + i) == '\0')
			return (haystack);
		haystack++;
	}
	return ((void *)0);
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
	return ((void *)0);
}
