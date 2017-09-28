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
	int j;
	char upper = 'a' - 'A';
	char *encode = "nopqrstuvwxyzabcdefghijklm";
	/*    *alpha = "abcdefghijklmnopqrstuvwxyz";*/

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 26 ; j++)
		{
			if (s[i] == (j + 'a'))
			{
				s[i] = encode[j];
				break;
			}
			else if (s[i] == (j + 'a') - upper)
			{
				s[i] = encode[j] - upper;
				break;
			}
		}
	}
	return (s);
}
