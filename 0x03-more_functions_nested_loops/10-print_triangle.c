#include "holberton.h"

/**
 * print_triangle: prints a # triangle in terminal
 * @n: length of triangle's side
 */
void print_triangle(int n)
{
	int i, j;

	if (n> 0)
	{
		for (i = 0; i < n; i++)
			for (j = 0; j < n; j++)
				if (j < i)
					_putchar(' ');
				else
					_putchar('#');
	}
	_putchar('\n');
}
