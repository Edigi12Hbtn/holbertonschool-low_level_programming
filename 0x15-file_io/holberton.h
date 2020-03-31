#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>

/* Libraries for open */
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/* Libraries for open */

/* Library for read, write and close system calls*/
#include <unistd.h>
/* Library for read */

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif /* HOLBERTON_H */
