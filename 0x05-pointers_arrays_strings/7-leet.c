#include "holberton.h"

/**
 * leet - encodes a string to 1337
 * @s: string to encode
 *
 * Return: encoded string
 */
char *leet(char *s)
{
	int i, j;
	int upper = 'a' - 'A';
	int encode[] = {'o', 'l', '\0', 'e', 'a', '\0', '\0', 't'};

	for (i = 0; s[i] != '\0'; i++)
	{
	 	for (j = 0; j < 8; j++)
		{
			if (s[i] != ' ' && (s[i] == encode[j] || (s[i] - upper) == encode[j]))
				s[i] = j + '0';
		}
	}
	return s;
}
