#include "hash_tables.h"
#include <string.h>
#include <stdio.h>

/**
 * hash_table_set - adds an element to a hash table
 * @ht: hash table to add element to
 * @key: key (cannot be empty)
 * @value: value associated with key to add (can be empty)
 *
 * Return: 1 if success, 0 if fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	if (strcmp(key, "") == 0)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = malloc(sizeof(strlen(key)) + 1);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	strcpy(new->key, key);
	new->value = malloc(sizeof(strlen(value)) + 1);
	if (new->value == NULL)
	{
		free((void *)key);
		free(new);
		return (0);
	}
	strcpy(new->value, value);
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
