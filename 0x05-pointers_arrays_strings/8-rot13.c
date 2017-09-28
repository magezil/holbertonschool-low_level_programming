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
	char j;
	char upper = 'a' - 'A';
	char *encode = "nopqrstuvwxyzabcdefghijklm";
	/*    *alpha = "abcdefghijklmnopqrstuvwxyz";*/

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = s[i]; ((j >= 'a' && j <= 'z') || (j >= 'A' && j <= 'Z')); j++)
		{
			if (s[i] == j)
			{
				s[i] = encode[j - 'a'];
				break;
			}
			else
			{
				s[i] = encode[j - 'a'] - upper;
				break;
			}
		}
	}
	return (s);
}
