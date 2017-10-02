#include <stdio.h>

/**
 * main - print numbers of base 16 from 0-f followed by a new line
 *
 * Return: 0 (success)
 */
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
		putchar(c);
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
