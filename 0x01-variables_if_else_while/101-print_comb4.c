#include <stdio.h>

/**
 * main - print all combination of three digits once
 *
 * Return: 0 (success)
 */
int main(void)
{
	int c;
	int n;
	int e;

	for (c = '0'; c <= '9'; c++)
	{
		for (n = c + 1; n <= '9'; n++)
		{
			for (e = n + 1; e <= '9'; e++)
			{
				if (!(c == '0' && n == '1' && e == '2'))
				{
					putchar(',');
					putchar(' ');
				}
				putchar(c);
				putchar(n);
				putchar(e);
			}
		}
	}
	putchar('\n');
	return (0);
}
