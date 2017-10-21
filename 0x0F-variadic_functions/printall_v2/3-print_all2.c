#include "variadic_functions2.h"

/**
 * print_all - print anything
 * @format: list of types of arguments passed to function
 * @...: list of arguments to print
 */
void print_all(const char * const format, ...)
{
	print_t prints[] = {
		{"c", print_char},
		{"i", print_number},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
	va_list args;
	int i, j;
	char *sep;

	va_start(args, format);
	sep = "";
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (prints[j].type != NULL)
		{
			/* only compare current format with prints type once */
			if (format[i] == *(prints[j].type))
			{
				prints[j].f(sep, args);
				sep = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}

/**
 * print_string - print strings
 * @separator: string to print after string
 * @args: list to retrive string from
 */
void print_string(const char *separator, va_list args)
{
	char *message;

	message = va_arg(args, char *);
	if (message == NULL)
		message = "(nil)";
	printf("%s%s", separator, message);
}

/**
 * print_number - print given numbers
 * @separator: string to print after number
 * @args: list to retrieve int from
 */
void print_number(const char *separator, va_list args)
{
	printf("%s%d", separator, va_arg(args, int));
}

/**
 * print_char - print a character
 * @separator: string to print after character
 * @args: list to retrieve char from
 */
void print_char(const char *separator, va_list args)
{
	printf("%s%c", separator, va_arg(args, int));
}


/**
 * print_float - print float
 * @separator: string to print after float
 * @args: list to retrieve float from
 */
void print_float(const char *separator, va_list args)
{
	printf("%s%f", separator, va_arg(args, double));
}
