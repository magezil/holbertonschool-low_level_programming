#include "holberton.h"

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: name of file to append to
 * @text_content: string to append to file (terminated by NULL)
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, written, len;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		len = _strlen(text_content);
		written = write(fd, text_content, len);
		if (written == -1)
		{
			close(fd);
			return (-1);
		}
	}
	fd = close(fd);
	if (fd == -1)
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
