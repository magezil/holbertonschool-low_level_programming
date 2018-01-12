#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned int comma;
	unsigned long int index;

	if (ht == NULL)
		return;
	printf("{");
	comma = 0;
	for (index = 0; index < ht->size; index++)
	{
		for (temp = ht->array[index]; temp != NULL; temp = temp->next)
		{
			if (comma == 0)
				comma = 1;
			else
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
		}
	}
	printf("}\n");
}
