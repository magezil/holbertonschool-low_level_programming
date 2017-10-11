#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * strtow - split string into words
 * @str: string to split
 *
 * Return: pointer to array of strings (success) or NULL (fail)
 */
char **strtow(char *str)
{
	char **words;
	int wc, cc;
	int i, j, count;

	if (str == NULL || *str == '\0')
		return (NULL);
	wc = 0;
	for (i = 0; str[i] != '\0'; i++)
		if (i > 0 && str[i] == ' ' && str[i - 1] != ' ')
			wc++;

	words = malloc(sizeof(char *) * (wc + 1));
	if (words == NULL || wc == 0)
		return (NULL);

	count = 0;
	for (i = 0; i < wc; i++)
	{
		cc = 0;
		while (str[count] == ' ' && str[count] != '\0')
			count++;
		for (j = 0; str[count + j] != '\0' && str[count + j] != ' '; j++)
			cc++;
		words[i] = malloc(sizeof(char) * (cc + 1));
		if (words[i] == NULL)
		{
			for (; i >= 0; i--)
				free(words[i]);
			free(words);
			return (NULL);
		}
		for (j = 0; j < cc; j++, count++)
			words[i][j] = str[count];
		words[i][j] = '\0';
	}
	words[i] = NULL;
	return (words);
}
