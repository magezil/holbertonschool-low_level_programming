#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>
/**
 * main - multiply two positive numbers
 * @argc: number of arguments passed
 * @argv: arguments passed: program name, num1, num2
 *
 * Return: 0 if product printed, 98 if fail
 */
int main(int argc, char *argv[])
{
	char *num1, *num2, *prod;
	unsigned int len1, len2, len, i, j, temp = 0, carry, tens = 0;

	if (argc < 3)
	{
		_puts("Error");
		exit(98);
	}
	num1 = argv[1];
	num2 = argv[2];
	if (!(isnum(num1) && isnum(num2)))
	{
		_puts("Error");
		exit(98);
	}
	len1 = _strlen(num1);
	len2 = _strlen(num2);
	len = len1 + len2;
	prod = _calloc(len + 1, sizeof(*prod));
	if (prod == NULL)
	{
		_puts("Error");
		exit(98);
	}
	for (i = 0; i < len1; i++, tens++)
	{
		for (carry = 0, j = 0; j < len2; j++)
		{
			temp = (num1[len1 - i - 1] - '0') * (num2[len2 - j - 1] - '0') + carry;
			if (prod[len - j - tens - 1] > 0)
				temp += prod[len - j - tens - 1] - '0';
			prod[len - j - tens - 1] = temp % 10 + '0';
			carry = temp / 10;
		}
		prod[len - j - tens - 1] += carry + '0';
	}
	_puts(prod);
	free(prod);
	return (0);
}

/**
 * isnum - check if given string is a number
 * @num: string to check
 *
 * Return: 1 if number, 0 otherwise
 */
int isnum(char *num)
{
	while (*num != '\0')
	{
		if (*num < '0' || *num > '9')
			return (0);
		num++;
	}
	return (1);
}

/**
 * _strlen - return length of a string
 * @s: string to find the length of
 *
 * Return: length of string
 */
unsigned int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; s++)
		count++;

	return (count);
}

/**
 * _puts - prints given string followed by a new line
 * @str: string to be printed
 */
void _puts(char *str)
{
	while (*str == '\0' || *str == '0')
		str++;
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

/**
 * _calloc - allocate and initialize memory for an array
 * @nmemb: number of elements
 * @size: size in bytes of each element
 *
 * Return: pointer to allocated memory (success) or NULL (fail)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		p[i] = 0;
	return (p);
}
