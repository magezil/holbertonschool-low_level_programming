#include "holberton.h"

int is_prime_helper(int n, int d);

/**
 * is_prime_number - check if number is a prime number
 * @n: number to check if prime
 *
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_helper(n, n - 1));
}

/**
 * is_prime_helper - recursive helper function to test if number is prime
 * @n: number to check
 * @d: number to see if divisor
 *
 * Return: 1 if prime, 0 if not
 */
int is_prime_helper(int n, int d)
{
	if (d == 1)
		return (1);
	if (n % d == 0)
		return (0);
	return (is_prime_helper(n, d - 1));
}
