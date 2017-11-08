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
	int fd0, fd1, num_read, num_write;
	char buff[BUFF_SIZE];

	if (ac != 3) /* check number of arguments */
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	open_all(&fd0, &fd1, av[1], av[2]);
	num_read = BUFF_SIZE;
	while (num_read == BUFF_SIZE) /* read file until end of file */
	{
		num_read = read(fd0, buff, BUFF_SIZE);
		read_check(fd0, fd1, num_read, av[1]);
		num_write = write(fd1, buff, num_read);
		if (num_read != num_write)
			num_write = -1;
		write_check(fd0, fd1, num_write, av[2]);
	}
	close_all(fd0, fd1);
	return (0);
}

/**
 * open_all - check if open file_source and file_destination
 * @fd0: file_source
 * @fd1: file_destination
 * @file_s: name of file_source
 * @file_d: name of file_destination
 */
void open_all(int *fd0, int *fd1, char *file_s, char *file_d)
{
	mode_t mode;

	if (fd1 == NULL || file_d == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_d);
		exit(99);
	}
	if (fd0 == NULL || file_s == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_s);
		exit(98);
	}
	*fd0 = open(file_s, O_RDONLY);
	if (*fd0 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_s);
		exit(98);
	}
	mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	*fd1 = open(file_d, O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (*fd1 == -1)
	{
		close(*fd0);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_d);
		exit(99);
	}
}

/**
 * write_check - check if file_destination can be opened and written
 * @fd0: file_source
 * @fd1: file_destination
 * @flag: determines whether write was success or not
 * @filename: name of file to write
 */
void write_check(int fd0, int fd1, int flag, char *filename)
{
	if (flag == -1)
	{
		close(fd0);
		close(fd1);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}

/**
 * read_check - check if file_source can be opened and read
 * @fd0: file_source
 * @fd1: file_destination
 * @flag: determines whether write was success or not
 * @filename: name of file to read
 */
void read_check(int fd0, int fd1, int flag, char *filename)
{
	if (flag == -1)
	{
		close(fd0);
		close(fd1);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
}

/**
 * close_all - close all files
 * @fd0: first file to close
 * @fd1: second file to close
 */
void close_all(int fd0, int fd1)
{
	fd0 = close(fd0);
	fd1 = close(fd1);
	if (fd0 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd0);
		exit(100);
	}
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd1);
		exit(100);
	}
}
