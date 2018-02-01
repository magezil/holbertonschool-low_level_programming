#include "sort.h"

/**
 * heap_sort - implement heap sort algorithm on an array of integers
 *
 * @array: array of integers
 * @size: number of elements in array
 */
void heap_sort(int *array, size_t size)
{
	if (array == NULL || size <= 1)
		return;
	build_heap(array, size);
	heap_recursive(array, size, size - 1);
}

/**
 * heap_recursive - recursive helper method of heap sort
 *
 * @array: array of integers
 * @size: number of elements in array
 * @last: index of last element of heap
 */
void heap_recursive(int *array, size_t size, size_t last)
{
	if (last == 0)
		return;
	swap(array, size, 0, last);
	last--;
	check_child(array, size, last, 0);
	heap_recursive(array, size, last);
}

/**
 * swap - swaps two elements in array then prints array
 *
 * @array: array of integers
 * @size: number of elements in array
 * @index0: first index to swap
 * @index1: second index to swap
 */
void swap(int *array, size_t size, size_t index0, size_t index1)
{
	int temp;

	temp = array[index0];
	array[index0] = array[index1];
	array[index1] = temp;
	print_array(array, size);
}

/**
 * build_heap - builds max heap
 *
 * @array: array of integers
 * @size: number of elements in array
 */
void build_heap(int *array, size_t size)
{
	int node;

	for (node = (size - 1) / 2; node >= 0; node--)
		check_child(array, size, size - 1, node);
}

/**
 * check_child - checks if children in correct position for max heap
 *
 * @array: array of integers
 * @size: number of elements in array
 * @last: index of last node in heap (not sorted)
 * @node: index of current node of heap
 */
void check_child(int *array, size_t size, size_t last, size_t node)
{
	size_t left_child, right_child, larger_child;

	left_child = 2 * node + 1;
	right_child = 2 * node + 2;
	if (left_child > last)
		return;
	if (right_child <= last && array[right_child] > array[left_child])
		larger_child = right_child;
	else
		larger_child = left_child;
	if (array[larger_child] > array[node])
	{
		swap(array, size, larger_child, node);
		check_child(array, size, last, larger_child);
	}
}
