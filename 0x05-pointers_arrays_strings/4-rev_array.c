#include "holberton.h"

/**
 * reverse_array - reverses elements of int array
 * @a: array to reverse
 * @n: number of elements in array
 */
void reverse_array(int *a, int n)
{
	int i, j, temp;

	temp = 0;
	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
