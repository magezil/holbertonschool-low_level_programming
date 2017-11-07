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

	if (filename == NULL)
		return (0);

	buff = malloc(letters);
	if (buff == NULL)
		return (0);

	fd = open(filename, O_RDONLY, 600);
	if (fd == -1)
		return (0);
	red = read(fd, buff, letters);
	buff[red] = '\0';
	printed = write(STDOUT_FILENO, buff, red);
	if (printed == -1 || printed != red)
		return (0);
	return (printed);
}
