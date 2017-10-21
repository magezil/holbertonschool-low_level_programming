#include "variadic_functions.h"

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
				printf("%s", sep);
				prints[j].f(args);
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
 * @args: list to retrive string from
 */
void print_string(va_list args)
{
	char *message;

	message = va_arg(args, char *);
	if (message == NULL)
		message = "(nil)";
	printf("%s", message);
}

/**
 * print_number - print given numbers
 * @args: list to retrieve int from
 */
void print_number(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_char - print a character
 * @args: list to retrieve char from
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}


/**
 * print_float - print float
 * @args: list to retrieve float from
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}
