#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - print strings followed by a new line
 * @separator: string to print between numbers
 * @n: number of strings passed to function
 * @...: strings to print
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *message;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		message = va_arg(args, char *);
		if (message != NULL)
			printf("%s", message);
		else
			printf("(nil)");
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
