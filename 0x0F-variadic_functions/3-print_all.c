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
	int i;
	char *message;
	char *sep;

	va_start(args, format);
	i = 0;
	sep = "";
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			printf("%s%c", sep, va_arg(args, int));
			sep = ", ";
			break;
		case 'i':
			printf("%s%d", sep, va_arg(args, int));
			sep = ", ";
			break;
		case 'f':
			printf("%s%f", sep, va_arg(args, double));
			sep = ", ";
			break;
		case 's':
			message = va_arg(args, char *);
			if (message == NULL)
				message = "(nil)";
			printf("%s%s", sep, message);
			sep = ", ";
			break;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
