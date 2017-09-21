#include <stdio.h>

/**
 * main -prints the largest prime factor of 612852475143
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i = 2, num = 612852475143;
	while (i < num)
	{
		if (num % i == 0)
		{
			num /= i;
			i = 2;
		}
		else
		{
			i++;
		}
	}
	return (0);
}
