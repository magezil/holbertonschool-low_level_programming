#include "holberton.h"

/**
 * cap_string - capitalize first letter of each word in a string
 * @s: string to operate on
 *
 * Return: updated string
 */
char *cap_string(char *s)
{
	char *temp;
	int next;
	int cap;

	next = 1; /* Since first letter should be capitalized */
	cap = 'a' - 'A';
	for (temp = s; *temp != '\0'; temp++)
	{
		if (*temp == ' ' || *temp == '\t' || *temp == '\n' ||
		*temp == ',' || *temp == ';' || *temp == '.' || *temp == '!' ||
		*temp == '?' || *temp == '\"' || *temp == '(' || *temp == ')' ||
		*temp == '{' || *temp == '}')
			next = 1;
		else if (next)
		{
			next = 0;
			if (*temp >= 'a' && *temp <= 'z')
				*temp -= cap;
		}
	}
	return (s);
}
