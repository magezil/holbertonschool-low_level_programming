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

#endif /* _SORT_H_ */
