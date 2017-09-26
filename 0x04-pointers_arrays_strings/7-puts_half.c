#include "holberton.h"

/**
 * puts_half - print second half of string
 * @str: the string to print
 */
void puts_half(char *str)
{
	int i;
	int len;

	len = _strlen(str);
	for (i = len / 2 + 1; i < len; i++)
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
