#include <stdio.h>

/**
 * main - print 00-99 separated by ', '
 *
 * Return: 0 (success)
 */
int main(void)
{
	int c;
	int n;

	for (c = '0'; c <= '9'; c++)
	{
		for (n = '0'; n <= '9'; n++)
		{
			putchar(c);
			putchar(n);
			if (!(c == '9' && n == '9'))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
