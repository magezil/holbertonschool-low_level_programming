#include "holberton.h"

/**
 * set_string - sets value of pointer to a char
 * @s: pointer to pointer to be set
 * @to: pointer to char value to set
 */
void set_string(char **s, char *to)
{
	*s = to;
}
