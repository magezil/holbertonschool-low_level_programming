#include <stdio.h>

/**
 * main - prints numbers 1-100 replacing certain multiples with Fizz and Buzz
 *
 * Description: print numbers 1-100 with the following replacements:
 *                  - multiples of 3 with Fizz
 *                  - multiples of 5 with Buzz
 *                  - multiples of 3 and 5 with FizzBuzz
 * Return: 0 (success)
 */
int main(void)
{
	int i;


	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz");
		if (i % 5 == 0)
			printf("Buzz");
		if (i % 3 != 0 && i % 5 != 0)
			printf("%d", i);
		printf(" ");
	}
	printf("\n");
	return (0);
}
