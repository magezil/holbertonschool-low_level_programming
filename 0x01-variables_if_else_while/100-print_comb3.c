#include <stdio.h>

/**
 * main - print all combination of two digits once
 *
 * Return: 0 (success)
 */
int main(void)
{
	int c;
	int n;

	for (c = '0'; c <= '9'; c++)
	{
		for (n = c + 1; n <= '9'; n++)
		{
			if (!(c == '0' && n == '1'))
			{
				putchar(',');
				putchar(' ');
			}
			putchar(c);
			putchar(n);
		}
	}
	putchar('\n');
	return (0);
}
