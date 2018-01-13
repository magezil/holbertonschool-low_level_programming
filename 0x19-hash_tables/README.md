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

### 4-hash_table_get.c
* Retrieves a value associated with a key
* Prototype: `char *hash_table_get(const hash_table_t *ht, const char *key);`
* Return: value associated with key, NULL if not found

### 5-hash_table_print.c
* Prints a hash table
* Prototype: `void hash_table_print(const hash_table_t *ht);`

### 6-hash_table_delete.c
* Deletes hash table
* Prototype: `void hash_table_delete(hash_table_t *ht);`

### 100-sorted_hash_table.c
* Implement a PHP-like ordered hash table with the following functions
* Prototype: `shash_table_t *shash_table_create(unsigned long int size);`
  * Creates new sorted hash table
  * Returns: pointer to new hash table
* Prototype: `int shash_table_set(shash_table_t *ht, const char *key, const char *value);`
  * Add element to the hash table
  * Return: 1 if success, 0 otherwise
* Prototype: `char *shash_table_get(const shash_table_t *ht, const char *key);`
* Prototype: `void shash_table_print(const shash_table_t *ht);`
* Prototype: `void shash_table_print_rev(const shash_table_t *ht);`
* Prototype: `void shash_table_delete(shash_table_t *ht);`
