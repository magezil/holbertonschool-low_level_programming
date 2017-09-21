#include <stdio.h>

/**
 * main - print all combinations of two two-digit numbers
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n;
	int m;
	int zero;

	zero = '0';
	for (n = 0; n < 99; n++)
	{
		for (m = n + 1; m <= 99; m++)
		{
			putchar(n / 10 + zero);
			putchar(n % 10 + zero);
			putchar(' ');
			putchar(m / 10 + zero);
			putchar(m % 10 + zero);
			if (!(n == 98 && m == 99))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
