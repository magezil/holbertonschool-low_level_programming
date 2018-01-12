#include "hash_tables.h"

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
	hash_node_t *current;

	if (ht == NULL || key == NULL || value == NULL || strcmp(key, "") == 0)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	for (current = ht->array[index]; current != NULL; current = current->next)
	{
		if (strcmp(current->key, key) == 0)
		{
			if (strcmp(current->value, value) != 0)
			{
				free(current->value);
				current->value = strdup(value);
			}
			return (1);
		}
	}
	new = node_create(key, value);
	if (new == NULL)
		return (0);
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}

/**
 * node_create - creates a new hash node
 * @key: key to add
 * @value: value to add
 *
 * Return: pointer to new node, or NULL if fail
 */
hash_node_t *node_create(const char *key, const char *value)
{
	hash_node_t *new;

	if (key == NULL || value == NULL || strcmp(key, "") == 0)
		return (NULL);
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (NULL);
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (NULL);
	}
	new->value = strdup(value);
	if (new->value == NULL)
	{
		free(new->key);
		free(new);
		return (NULL);
	}
	return (new);
}
