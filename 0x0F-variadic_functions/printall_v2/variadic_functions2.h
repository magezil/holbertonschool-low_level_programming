#ifndef VARIADIC_H
#define VARIADIC_H
#include <stdarg.h>
#include <stdio.h>

/**
 * struct print_functions - Struct print_functions
 *
 * @type: The format to print
 * @f: The print function to use
 */
typedef struct print_functions
{
	char *type;
	void (*f)();
} print_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_number(const char *separator, va_list list);
void print_string(const char *separator, va_list list);
void print_char(const char *separator, va_list list);
void print_float(const char *separator, va_list list);

#endif
