# 0x19-hash_tables

## C - Hash tables
### 0-hash_table_create.c
* Function creates a hash table
* Prototype: `hash_table_t *hash_table_create(unsigned long int size);`
* Return: pointer to hash table

### 1-djb2.c
* Hash function implementing the djb2 algorithm
* Prototype: `unsigned long int hash_djb2(const unsigned char *str);`
* Return: hash value

### 2-key_index.c
* Gives index of a key
* Prototype: `unsigned long int key_index(const unsigned char *key, unsigned long int size);`
* Return: index for key/value pair

### 3-hash_table_set.c
* Add element to the hash table
* Prototype: `int hash_table_set(hash_table_t *ht, const char *key, const char *value);`
* Return: 1 if success, 0 otherwise

