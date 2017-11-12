#ifndef HOLBERTON_H
#define HOLBERTON_H

/* for malloc */
#include <stdlib.h>

/* for read, write */
#include <unistd.h>

/* for open */
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/* for dprintf and printf */
#include <stdio.h>

/* for elf */
#include <elf.h>

#define BUFF_SIZE 1024

/* functions created */
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

/* helper functions */
unsigned int _strlen(char *s);
void open_check(int fd0, int fd1, char *file_s);
void write_check(int fd0, int fd1, int flag, char *filename);
void read_check(int fd0, int fd1, int flag, char *filename);
void close_check(int fd0, int close_flag);
void print_class(unsigned int);
void print_data(unsigned int);
void print_version(unsigned int);
void print_obsabi(unsigned int);
void print_type(unsigned int);

#endif /* HOLBERTON_H */
