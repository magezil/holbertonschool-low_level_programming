#include <stdlib.h>
#include "holberton.h"

/**
 * argstostr - concatenate all arguments given to program on command line
 * @ac: number of arguments
 * @av: pointer to pointers of given arguments
 *
 * Return: pointer to new string (success) or NULL (failure)
 */
char *argstostr(int ac, char **av)
{
	int i;
	int len;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	len = ac;
	for (i = 0; i < ac; i++)
		len += _strlen(av[i]);

	str = malloc(sizeof(char) * len);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		str = str_concat(str, av[i]);
		str = str_concat(str, "\n");
	}
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
	char nul = '\0';

	if (s1 == NULL)
		s1 = &nul;
	if (s2 == NULL)
		s2 = &nul;
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
	return (str);
}
