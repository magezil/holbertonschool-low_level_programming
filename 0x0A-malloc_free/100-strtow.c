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

	wc = word_count(str);
	if (wc == 0)
		return (NULL);
	words = malloc(sizeof(char *) * (wc + 1));
	if (words == NULL)
		return (NULL);

	for (count = 0, i = 0; i < wc; i++)
	{
		while (str[count] == ' ' && str[count] != '\0')
			count++;
		cc = char_count(str, count);
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

/**
 * word_count - returns number of words in given string delimited by spaces
 * @str: string to count words
 *
 * Return: number of words
 */
int word_count(char *str)
{
	int i;
	int wc = 0;
	int wordon = 0;

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
	return (wc);
}

/**
 * char_count - returns number of chars in given word
 * @str: string to count chars
 * @index: index of string for word to count
 *
 * Return: number of chars
 */
int char_count(char *str, int index)
{
	int j;
	int cc = 0;

	for (j = 0; str[index + j] != '\0' && str[index + j] != ' '; j++)
		cc++;
	return (cc);
}
