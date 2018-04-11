#ifndef __search__
#define __search__
#include <stdlib.h>
#include <stdio.h>

int bin_search_recursive(int *array, size_t start, size_t end, int value);
int interpolation_recursive(int *array, size_t low, size_t high, int value);

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
#endif /* __search__ */
