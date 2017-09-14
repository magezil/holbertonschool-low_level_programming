#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print random number n and whether it is positive or negative
 * @n: The random number to be gernated and printed
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d is ", n);
	if (n > 0)
		printf("positive\n");
	else if (n == 0)
		printf("zero\n");
	else
		printf("negative\n");
	return (0);
}
