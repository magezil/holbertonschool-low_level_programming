#include "holberton.h"

/**
 * print_most_numbers: prints digits 0 to 9, except 2 and 4, and a new line
 */
void print_numbers(void)
{
	int i;

	for (int i = '0'; i < '9'; i++)
	{
		if (i != 2 && i != 4)
			_putchar(i);
	}
	_putchar('\n');
}
