#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print the last digit of the number stored in n
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n;
	int r;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	r = n % 10;
	printf("Last digit of %d is %d and is ", n, r);
	if (r > 5)
		printf("greater than 5\n");
	else if (r == 0)
		printf("0\n");
	else
		printf("less than 6 and not 0\n");
	return (0);
}
