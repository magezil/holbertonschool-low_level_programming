#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - print sum of each diagonal of square matrix
 * @a: matrix
 * @size: size of matrix
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum;

	sum = 0;
	for (i = 0; i < size; i++)
		sum += a[i * size + i];
	printf("%d, ", sum);
	sum = 0;
	for (i = 0; i < size; i++)
		sum += a[i * size + (size - i - 1)];
	printf("%d\n", sum);
}
