#include "holberton.h"

int is_palindrome_helper(char *s, char *end);

/**
 * is_palindrome - check if string is a palindrome
 * @s: string to check
 *
 * Return: 1 if string is a palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	char *end;

	if (*s == '\0')
		return (1);

	end = s + (_strlen_recursion(s) - 1);
	return (is_palindrome_helper(s, end));
}

/**
 * is_palindrome_helper - recursive helper function to check if string is
 *                        a palindrome
 * @s: string to check
 * @end: pointer to end of string
 *
 * Return: 1 if string is a palindrome, 0 if not
 */
int is_palindrome_helper(char *s, char *end)
{
	if (s >= end)
		return (1);
	if (*s != *end)
		return (0);
	return (1 && is_palindrome_helper(s + 1, end - 1));
}

/**
 * _strlen_recursion - return length of a string
 * @s: string to find length of
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
