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
	fd0 = open(av[1], O_RDONLY);
	read_check(fd0, av[1]);
	fd1 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	write_check(fd0, av[2]);
	num_read = BUFF_SIZE;
	while (num_read != 0) /* read file until end of file */
	{
		num_read = read(fd0, buff, BUFF_SIZE);
		read_check(num_read, av[1]);
		num_write = write(fd1, buff, num_read);
		write_check(num_write, av[2]);
	}
	close_all(fd0, fd1);
	return (0);
}

/**
 * write_check - check if file_destination can be opened and written
 * @fd: file descriptor
 * @filename: name of file to write
 */
void write_check(int fd, char *filename)
{
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}

/**
 * read_check - check if file_source can be opened and read
 * @fd: file descriptor
 * @filename: name of file to read
 */
void read_check(int fd, char *filename)
{
	if (fd == -1)
	{
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
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd0);
		exit(100);
	}
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
}
