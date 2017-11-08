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

	if (ac != 3) /* check number of arguments */
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fd0 = open(av[1], O_RDONLY);
	open_check(fd0, 0, av[1]);
	mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	fd1 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	open_check(fd0, fd1, av[2]);
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
	fd0 = close(fd0);
	close_check(fd0);
	fd1 = close(fd1);
	close_check(fd1);
	return (0);
}

/**
 * open_check - check if open file
 * @fd0: file_source
 * @fd1: file_destination
 * @file_s: name of file
 */
void open_check(int fd0, int fd1, char *file_s)
{
	if (fd0 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_s);
		exit(98);
	}
	if (fd1 == -1)
	{
		if (fd0 != -1)
			close(fd0);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_s);
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
 * close_check - check if close file success
 * @fd: first file to close
 */
void close_check(int fd)
{
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd);
		exit(100);
	}
}
