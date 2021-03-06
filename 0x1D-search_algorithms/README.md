# 0x1D-search_algorithms

## Search algorithms
### 0-linear.c
* Uses a linear search algorithm to find a value in an array
* Prototype: `int linear_search(int *array, size_t size, int value);`

### 1-binary.c
* Use binary search to find a number in an array
* Prototype: `int binary_search(int *array, size_t size, int value);`

### 2-O
* Time complexity of linear search (worst case)

### 3-O
* Space complexity of linear search (worst case)

### 4-O
* Time complexity of binary search (worst case)

### 5-O
* Space complexity of binary search (worst case)

### 6-O
* Space complexity of following function
```
int **allocate_map(int n, int m)
{
     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i < n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
     }
     return (map);
}
```

### 100-jump.c
* Use jump search to find a number in an array
* Prototype: `int jump_search(int *array, size_t size, int value);`

### 101-O
* Big O for time complexity of jump search (average case)

### 102-interpolation.c
* Use interpolation search to find a value in given array
* Prototype: `int interpolation_search(int *array, size_t size, int value);`

### 103-exponential.c
* Use exponential search to find an element in a list
* Prototype: `int exponential_search(int *array, size_t size, int value);`

### 104-advanced_binary.c
* Use binary search to find first instance of value in array
* Prototype: `int advanced_binary(int *array, size_t size, int value);`

### 105-jump_list.c
* use jump search to find a value in a singly linked list
* Prototype: `listint_t *jump_list(listint_t *list, size_t size, int value);`

### 106-linear_skip.c
* find a value in a skip linked list
* Prototype: `skiplist_t *linear_skip(skiplist_t *list, int value);`

### 107-O
* Big O for time complexity of jump search (average case)

### 108-O
* Big O for time complexity of jump search in skip list (average case)
