#include "holberton.h"

/**
 * _strstr - find a needle in a haystack, aka locate substring
 * @haystack: string to be searched
 * @needle: substring to find
 *
 * Return: pointer to beginning of located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	while (*haystack != '\0')
	{
		if (*haystack == *needle)
			while (*(haystack + i) == *(needle + i) && *(needle + i) != '\0')
				i++;
			if (*(haystack + i) == *(needle + i))
				return (haystack);
		haystack++;
	}
	return (0);
}
