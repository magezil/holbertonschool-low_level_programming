#include <stdio.h>

void start_fun(void) __attribute__((constructor));

/**
 * start_fun - function that prints before main
 */
void start_fun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
