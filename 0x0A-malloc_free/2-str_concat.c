#include <stdlib.h>
#include "holberton.h"

/**
 * str_concat - concatenate two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 *
 * Return: string result of concatenating s1 and s2 (success) or NULL (failure)
 */
char *str_concat(char *s1, char *s2)
{
	int len;
	int len1;
	int i;
	char *str;

	len1 = _strlen(s1);
	len = len1 + _strlen(s2) + 1;
	str = malloc(sizeof(char) * len);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		if (i < len1)
			str[i] = s1[i];
		else
			str[i] = s2[i - len1];
	}
	str[i] = '\0';
	return (str);
}

/**
 * _strlen - return length of a string
 * @s: string to find the length of
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; s++)
		count++;

	return (count);
}
