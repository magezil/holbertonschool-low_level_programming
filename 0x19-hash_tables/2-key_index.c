#include "hash_tables.h"

/**
 * key_index - gives index of a key based on hash value
 * @key: key to get index of
 * @size: size of array of hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return hash_djb2(key) % size;
}
