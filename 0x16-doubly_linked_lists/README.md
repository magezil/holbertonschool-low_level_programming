# 0x16-doubly_linked_lists 
 
## Doubly linked lists
### lists.h
* Header file containing function prototypes and struct for doubly linked list node

### 0-print_dlistint.c
* Prints a `dlistint_t` list
* Prototype: `size_t print_dlistint(const dlistint_t *h);`
* Return: number of nodes

### 1-dlistint_len.c
* Counts the number of nodes in a `dlistint_t` list
* Prototype: `dlistint_t *add_dnodeint(dlistint_t **head, const int n);`
* Return: number of nodes

### 2-add_dnodeint.c
* Adds a new node at the beginning of a `dlistint_t` list
* Prototype: `dlistint_t *add_dnodeint(dlistint_t **head, const int n);`
* Return: address of new element or `NULL` if fail

### 3-add_dnodeint_end.c
* Adds a new node at the end of a `dlistint_t` list
* Prototype: `dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);`
* Return: address of new element or `NULL` if fail
