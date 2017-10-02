#include "holberton.h"

/**
 * puts2 - print every other character of a string starting with the first
 * @str: the string to print
 */
void puts2(char *str)
{
	int i;
	int len;

	len = _strlen(str);
	for (i = 0; i < len; i += 2)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}

#include "holberton.h"

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
