#include "holberton.h"

/**
 * rev_string - reverses given string
 * @s: string to reverse
 */
void rev_string(char *s)
{
	char temp;
	char *s2;

	s2 = s + (_strlen(s) - 1);

	while (s < s2)
	{
		temp = *s;
		*s = *s2;
		*s2 = temp;
		s++;
		s2--;
	}
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
