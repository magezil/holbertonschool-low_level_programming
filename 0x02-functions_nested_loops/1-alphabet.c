#include "holberton.h"

/**
 * print_alphabet - Prints lowercase alphabet followed by a new line
 */
void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
