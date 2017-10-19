#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * get_op_func - file for function to determine which operation to perform
 * @s: operator passed as argument to program
 *
 * Return: pointer to function to use for operation;
 *         or NULL if invalid operator
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	if (s == NULL || strlen(s) > 1)
		return (NULL);
	i = 0;
	while (i < 5 && *(ops[i].op) != *s && *(s + 1) == 0)
		i++;
	return (ops[i].f);
}
