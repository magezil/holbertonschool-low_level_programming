#include "holberton.h"

int _strlen(char *s);

/**
 * infinite_add - add two numbers
 * @n1: first number to add
 * @n2: second number to add
 * @r: result (sum)
 * @size_r: length of number that can be held in r
 *
 * Result: pointer to result (r) or 0 if sum cannot fit in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i;
	int j;
	int max;
	int len1;
	int len2;
	int count = 0;
	int sum;
	int carry = 0;

	len1 = _strlen(n1);
	len2 = _strlen(n2);

	if (len1 >= size_r || len2 >= size_r)
		return 0;

	if (len1 > len2)
		max = len1;
	else
		max = len2;
	r[max] = '\0';
	max--;
	for (i = len1 - 1, j = len2 - 1; max >= 0; i--, j--, max--)
	{
		if (i >= 0 && j >= 0)
		{
			sum = n1[i] - '0' + n2[j] - '0' + carry;
			r[max] = sum % 10 + '0';
			carry = sum / 10;
		}
		else if (i >= 0)
		{
			sum = n1[i] - '0' + carry;
			r[max] = sum % 10 + '0';
			carry = sum / 10;
		}
		else
		{
			sum = n2[j] - '0' + carry;
			r[max] = sum % 10 + '0';
			carry = sum / 10;
		}
		count++;
		if ((count + carry) >= size_r)
			return 0;
	}
	r[0] = carry + '0';
	return r;
}

int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; s++)
		count++;

	return (count);
}
