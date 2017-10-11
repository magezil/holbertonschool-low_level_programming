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
	int wordon = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	wc = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (wordon == 0 && str[i] != ' ')
		{
			wordon = 1;
			wc++;
		}
		
		if (str[i] == ' ' && wordon == 1)
			wordon = 0;	
	}

	if (wc == 0)
		return (NULL);

	words = malloc(sizeof(char *) * (wc + 1));
	if (words == NULL)
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
