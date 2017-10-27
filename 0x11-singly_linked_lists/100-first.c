#include <stdio.h>

void start_fun (void) __attribute__((constructor));

void start_fun (void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
