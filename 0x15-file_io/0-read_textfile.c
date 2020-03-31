#include "holberton.h"

/**
 * read_textfile -  reads a text file and
 * prints it to the POSIX standard output.
 *
 * @filename: filename of name to read.
 * @letters: numbers of letters to read and write.
 *
 * Return: returns the actual number of letters
 * it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t ret = 0, written_bytes = 0;
	int fd; /* file descriptor */
	char *str; /*Buffer to store readed data*/

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY); /* open a file like read and write */

	if (fd == -1)
		return (0);

	str = malloc(letters);
	if (str == NULL)
		return (0);

	ret = read(fd, str, letters); /* numbers of readed bytes*/

	if (ret == -1)
		return (0);

	close(fd);

	written_bytes = write(STDOUT_FILENO, str, ret);

	if (written_bytes == -1 || written_bytes != ret)
		return (0);

	return (ret);
}
