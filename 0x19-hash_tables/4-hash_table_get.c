#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table to retrieve from
 * @key: key to look for
 *
 * Return: value associated with key or NULL if key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	for (current = ht->array[index]; current != NULL; current = current->next)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
	}
	return (NULL);
}
