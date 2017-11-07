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

/* functions created */
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

/* helper functions */
unsigned int _strlen(char *s);

#endif /* HOLBERTON_H */
