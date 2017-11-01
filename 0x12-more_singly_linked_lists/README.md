# 0x12-more_singly_linked_lists

## More linked lists
### 0-print_listint.c
* function that prints all elements of a *listint_t* list
* Prototype: size_t print_listint(const listint_t *h);
* Return: number of nodes

### 1-listint_len.c
* function returns the number of elements of a *linstint_t* list
* Prototype: size_t listint_len(const listint_t *h);
* Return: number of nodes

### 2-add_nodeint.c
* function adds a new node to the beginning of a *listint_t* list
* Prototype: listint_t *add_nodeint(listint_t **head, const int n);
* Return: the address of the new element or NULL if failed

### 3-add_nodeint_end.c
* function adds a new node at the end of a *listint_t* list
* Prototype: listint_t *add_nodeint_end(listint_t **head, const int n);
* Return: the address of the new element or NULL if failed

### 4-free_listint.c
* function frees a *listint_t* list
* Prototype: void free_listint(listint_t *head);

### 5-free_listint2.c
* function frees a *listint_t* list
* Prototype: void free_listint2(listint_t **head);

### 6-pop_listint.c
* function deletes the head node of a *listint_t* linked list and returns head node's data
* Prototype: int pop_listint(listint_t **head);
* Return: data from deleted head node of linked list or 0 if linked list is empty

### 7-get_nodeint.c
* function returns the node at a given index of a *listint_t* linked list
* Prototype: listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
* Return: node at given index or NULL if node doesn't exist

### 8-sum_listint.c
* function returns the sum of all data(n) of a *listint_t* linked list
* Prototype: int sum_listint(listint_t *head);
* Return: sum of linked list or 0 if list is empty

### 9-insert_nodeint.c
* function inserts a new node at a given position
* Prototype: listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
* Return: address of new node or NULL if failed

### 10-delete_nodeint.c
* function deletes node at given index of a *listint_t* linked list
* Prototype: int delete_nodeint_at_index(listint_t **head, unsigned int index);
* Return: 1 if succeeded, -1 if failed

### 100-reverse_listint.c
* function reverses a *listint_t* linked list
* Prototype: listint_t *reverse_listint(listint_t **head);
* Return: pointer to the first node of reversed list

### 101-print_listint_safe.c
* function that prints a *listint_t* list
* Prototype: size_t print_listint_safe(const listint_t *head);
* Return: number of nodes

### 103-find_loop.c
* function finds the loop in a linked list
* Prototype: listint_t *find_listint_loop(listint_t *head);
* Returns: address of the node where the loop starts, or NULL if there is no loop
