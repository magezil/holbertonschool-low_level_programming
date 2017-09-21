#include "holberton.h"

/**
 * print_square: prints a # square in terminal
 * @n: length of square's side
 */
void print_square(int size)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			for (j = 0; j < n; j++)
				_putchar('#');
	}
	_putchar('\n');
}
