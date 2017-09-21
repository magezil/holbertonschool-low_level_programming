#include "holberton.h"

/**
 * more_numbers: prints numbers 0 to 14 and a new line ten times
 */
void more_numbers(void)
{
	int i, j;

	for (int i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
				_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
	}
	_putchar('\n');
}
