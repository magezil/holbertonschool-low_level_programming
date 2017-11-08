#include <stdio.h>
#include "holberton.h"

#define BUFF_SIZE 1024

/**
 * main - copy the content of one file into another
 * @ac: number of arguments
 * @av: vector of arguments
 *     should be: program_name file_source file_destination
 *
 * Return: 0 if success
 */
int main(int ac, char **av)
{
	char buff[BUFF_SIZE];
	int fd0, fd1, num_read, num_write;
	mode_t mode;

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fd0 = open(av[1], O_RDONLY);
	if (fd0 == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	fd1 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fd1 == -1)
	{
		close(fd0);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	}
	do {
		num_read = read(fd0, buff, BUFF_SIZE);
		if (num_read == -1)
		{
			close(fd0), close(fd1);
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		num_write = write(fd1, buff, num_read);
		if (num_write == -1 || num_read != num_write)
		{
			close(fd0), close(fd1);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	} while (num_read == BUFF_SIZE);
	if (close(fd0) == -1)
	{
		close(fd1);
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd0), exit(100);
	}
	if (close(fd1) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd1), exit(100);
	return (0);
}
