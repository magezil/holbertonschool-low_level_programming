#include "holberton.h"

/**
 * print_times_table - prints times table from 0 to n
 * @n: number of times table
 *
 * Description: prints time table from 0 to n as long as n is between 0-15
 */
void print_times_table(int n)
{
	int i;
	int m;
	int j;
	int temp;

	if (n <= 0 || n >= 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (j == 0)
			{
				_putchar('0');
			}
			else
			{
				_putchar(' ');
				m = i * j;
				/* Calculate first digit */
				temp = m / 100;
				if (temp == 0)
					_putchar(' ');
				else
					_putchar('0' + temp);
				/* Calculate second digit */
				temp = m / 10;
				if (temp == 0)
					_putchar(' ');
				else
					_putchar('0' + (temp % 10));
				/* Last digit */
				_putchar('0' + (m % 10));
			}
			if (j < n)
				_putchar(',');
		}
		_putchar('\n');
	}
}
