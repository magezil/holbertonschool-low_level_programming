# 0x13-bit_manipulation

## Introduction to bit manipulation
### 0-binary_to_uint.c
function converts a binary number to an `unsigned int`
Prototype: `unsigned int binary_to_uint(const char *b);`
* `b`: pointer to a string of `0` and `1` chars
Return: the converted number, or 0 if error

### 1-print_binary.c
function prints binary representation of an `unsigned int`
Prototype: `void print_binary(unsigned long int n);`
* `n`: number to convert

### 2-get_bit.c
function returns the value of a bit at given index
Prototype: `int get_bit(unsigned long int n, unsigned int index);`
* `n`: number to get bit from
* `index`: index of bit to return
Return: value of bit or -1 if error

### 3-set_bit.c
function sets the value of a bit to `1` at given index
Prototype: `int set_bit(unsigned long int *n, unsigned int index);`
* `n`: number to get bit from
* `index`: index of bit to set to 1
Return: 1 if success or -1 if fail
