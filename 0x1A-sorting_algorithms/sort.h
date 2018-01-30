#ifndef _SORT_H_
#define _SORT_H_
#include <stdlib.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: integer stored in node
 * @prev: pointer to previous node in list
 * @next: pointer to next node in list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void quick_recursive(int *array, size_t start, size_t pivot, size_t size);
size_t partition(int *array, size_t compare, size_t pivot, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
char swap_nodes(listint_t **list, listint_t *first, listint_t *second);

#endif /* _SORT_H_ */
