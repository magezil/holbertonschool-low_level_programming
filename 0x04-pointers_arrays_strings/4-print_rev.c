#include "holberton.h"

/**
 * print_rev - prints string in reverse
 * @s: string to reverse
 */
void print_rev(char *s)
{
	int count;

	for (count = _strlen(s) - 1; count >= 0; count--)
		_putchar(*(s + count));
	_putchar('\n');
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
