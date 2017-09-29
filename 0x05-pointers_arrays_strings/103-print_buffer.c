#include "holberton.h"
#include <stdio.h>

/**
 * print_buffer - print a buffer
 * @b: buffer to print
 * @size: size of buffer
 */
void print_buffer(char *b, int size)
{
	int i, line;

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		for (line = 0; line < 10; line++)
		{
			if ((line + i) < size)
				printf("%02x", b[i + line]);
			else
				printf("  ");
			if (line % 2 == 1)
				printf(" ");
		}
		for (line = 0; line < 10 && (line + i) < size; line++)
		{
			if (b[i + line] < 9 || (b[i + line] >= 10 && b[i + line] <= 31) ||
				b[i + line] == 127)
				printf(".");
			else
				printf("%c", b[i + line]);
		}
		printf("\n");
	}
}
