#include <stdio.h>

/**
 * main - print 0-9 followed by a new line
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		printf("%d", n);
	putchar('\n');
	return (0);
}
