#include <stdlib.h>
#include "holberton.h"

/**
 * string_nconcat - concatenate a string to n bytes of a second string
 * @s1: first string to concatenate
 * @s2: second string - concatenate only n bytes
 * @n: number of bytes of string 2 to concatenate
 *
 * Return: pointer to concatenated string (success) or NULL (fail)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	char empty = '\0';
	unsigned int len1;
	unsigned int len2;
	unsigned int i;

	if (s1 == NULL)
		s1 = &empty;
	if (s2 == NULL)
		s2 = &empty;

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	if (len2 < n)
		n = len2;
	str = malloc(sizeof(*str) * (len1 + n + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		str[i] = s1[i];
	for (i = 0; i < n; i++)
		str[i + len1] = s2[i];
	str[i + len1] = '\0';
	return (str);
}

/**
 * _strlen - return length of a string
 * @s: string to find the length of
 *
 * Return: length of string
 */
unsigned int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; s++)
		count++;

	return (count);
}
