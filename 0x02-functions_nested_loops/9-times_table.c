#include "holberton.h"

/**
 * times_table - prints times table from 0 to 9
 */
void times_table(void)
{
	int i;
	int n;
	int m;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n < 10; n++)
		{
			m = i * n;
			if (n == 0)
			{
				_putchar('0');
			}
			else
			{
				_putchar(' ');
				if (m > 10)
					_putchar('0' + (m/10));
				else
					_putchar(' ');
				_putchar('0' + (m %10));
			}
			if (n < 9)
				_putchar(',');
		}
		_putchar('\n');
	}
}
