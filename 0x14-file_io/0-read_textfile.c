#include "holberton.h"

/**
 * read_textfile - function reads a text file and prints it to standard output
 * @filename: path to file
 * @letters: number of letters to read and print
 *
 * Return: number of letters read and printed, 0 if fail
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int printed, red;
	int fd;
	char *buff;

	/* check invalid filename */
	if (filename == NULL)
		return (0);
	/* create buffer and check if valid */
	buff = malloc(letters + 1);
	if (buff == NULL)
		return (0);
	/* open file and check success */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	/* read file and check success */
	red = read(fd, buff, letters);
	if (red == -1)
		return (0);
	buff[red] = '\0';
	/* print file and check success */
	printed = write(STDOUT_FILENO, buff, red);
	if (printed == -1 || printed != red)
		return (0);
	/* close and check for success */
	fd = close(fd);
	if (fd == -1)
		return (0);
	free(buff);
	return (printed);
}
