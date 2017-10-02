#include "holberton.h"
#include <stdio.h>

/**
 * rot13 - encodes a string with rot-13
 * @s: string to encode
 *
 * Return: encoded string
 */
char *rot13(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		while ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = (s[i] - 'a' + 13) % 26 + 'a';
			else
				s[i] = (s[i] - 'A' + 13) % 26 + 'A';
			break;
		}
	}
	return (s);
}
