#include "holberton.h"

int _strlen(char *s);
void rev_string(char *s);

/**
 * infinite_add - add two numbers
 * @n1: first number to add
 * @n2: second number to add
 * @r: result (sum)
 * @size_r: length of number that can be held in r
 *
 * Return: pointer to result (r) or 0 if sum cannot fit in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, max, len1, len2, sum, count = 0, carry = 0;

	len1 = _strlen(n1);
	len2 = _strlen(n2);

	if (len1 >= size_r || len2 >= size_r)
		return (0);
	if (len1 > len2)
		max = len1;
	else
		max = len2;
	r[max + 1] = '\0';
	for (i = len1 - 1, j = len2 - 1; max >= 0; i--, j--, max--)
	{
		if (i >= 0 && j >= 0)
			sum = n1[i] - '0' + n2[j] - '0' + carry;
		else if (i >= 0)
			sum = n1[i] - '0' + carry;
		else if (j >= 0)
			sum = n2[j] - '0' + carry;
		else if (carry > 0)
			sum = carry;
		else
			r++;
		r[max] = sum % 10 + '0';
		carry = sum / 10;
		if (++count == size_r - 1 && carry > 0)
			return (0);
	}
	return (r);
}

/**
 * _strlen - return length of a string
 * @s: string to find the length of
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; s++)
		count++;

	return (count);
}

/**
 * rev_string - reverses given string
 * @s: string to reverse
 */
void rev_string(char *s)
{
	char temp;
	char *s2;

	s2 = s + (_strlen(s) - 1);

	while (s < s2)
	{
		temp = *s;
		*s = *s2;
		*s2 = temp;
		s++;
		s2--;
	}
}
