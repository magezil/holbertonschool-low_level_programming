#include <elf.h>
#include "holberton.h"

int cmp(char *s1, char *s2);

/**
 * main - displays information contained in the ELF header of ELF file
 * @ac: number of arguments
 * @av: vector of arguments
 *     should be: program_name elf_filename
 *
 * Return: 0 if success
 */
int main(int ac, char **av)
{
	int fd, num_read, i;
	char buff[BUFF_SIZE];
	char elf[] = {0x7f, 0x45, 0x4c, 0x46, 0x0};
/*	struct Elf32_Ehdr head;
*/
	if (ac != 2)
		dprintf(STDERR_FILENO, "Usage: elf_header elf_file\n"), exit(98);
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	num_read = read(fd, buff, BUFF_SIZE);
	if (num_read == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	buff[num_read] = '\0';
	if (cmp(elf, buff) == 0)
/*	if (e_indent[0] == 0x7f &&
		e_indent[1] == 'E' &&
		e_indent[2] == 'L' &&
		e_indent[3] == 'F')
*/	{
		printf("ELF\n");
		printf("Magic:\t");
		for (i = 0; i < 15; i++)
			printf("%02x ", buff[i]);
		printf("\n");
	}
	else
		dprintf(STDERR_FILENO, "Error: Not an ELF file %s\n", av[1]), exit(98);
	return (0);
}

/**
 * cmp - function checks if strings are the same
 * @s1: string 1
 * @s2: string 2
 *
 * Return: 0 if they are the same, 1 if not, -1 if error
 */
int cmp(char *s1, char *s2)
{
	if (s1 == NULL || s2 == NULL)
		return (-1);
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
			return (1);
		s1++;
		s2++;
	}
	return (0);
}
