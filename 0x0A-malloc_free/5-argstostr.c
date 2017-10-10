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
	int i, j;
	int count;
	int len;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	len = ac + 1;
	for (i = 0; i < ac; i++)
		len += _strlen(av[i]);

	str = malloc(sizeof(char) * len);
	str[0] = '\0';
	if (str == NULL)
		return (NULL);

	count = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < _strlen(av[i]); j++, count++)
			str[count] = av[i][j];
		str[count] = '\n';
		count++;
	}
	str[len - 1] = '\0';
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
