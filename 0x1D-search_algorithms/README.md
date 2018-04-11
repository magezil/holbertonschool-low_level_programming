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

