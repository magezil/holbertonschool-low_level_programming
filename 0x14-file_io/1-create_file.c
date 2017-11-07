#include "holberton.h"

/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: string to write to file (terminated by NULL)
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int written;
	unsigned int len;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	/* open file, write mode, create if doesn't exist, truncate otherwise */
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	len = _strlen(text_content);
	written = write(fd, text_content, len);
	if (written == -1)
		return (-1);

	return (1);
}

/**
 * _strlen - return length of a string
 * @s: string to find the length of
 *
 * Return: length of string
 */
unsigned int _strlen(char *s)
{
	unsigned int count;

	if (s == NULL)
		return (0);
	for (count = 0; *s != '\0'; s++)
		count++;
	return (count);
}
