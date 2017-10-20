#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - print anything
 * @format: list of types of arguments passed to function
 * @...: list of arguments to print
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i, invalid;
	char *message;

	va_start(args, format);
	i = 0;
	invalid = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(args, int));
			invalid = 0;
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			invalid = 0;
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			invalid = 0;
			break;
		case 's':
			message = va_arg(args, char *);
			if (message == NULL)
				message = "(nil)";
			printf("%s", message);
			invalid = 0;
			break;
		default:
			invalid = 1;
			break;
		}
		if (invalid != 1 && format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}
