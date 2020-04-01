#include "holberton.h"

ssize_t read_textfile2(int fd, const char *filen, size_t letters, char *buff);
int append_text_to_file2(const char *filen, int options, char *text_content);

/**
 * main - main function.
 *
 * @argc: number of arguments.
 * @argv: arguments.
 *
 * Return: 1 if succes.
 */

int main(int argc, char **argv)
{
	char *str_err;
	char buff[1025];
	ssize_t ret = 1;
	int fd;

	buff[1024] = '\0';

	if (argc != 3)
	{
		str_err	= "Usage: cp file_from file_to\n";
		write(STDERR_FILENO, str_err, 28);
		exit(97);
	}

	fd = open(argv[1], O_RDONLY); /* open a file like read only */

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	ret = read_textfile2(fd, argv[1], 1024, buff);
	if (ret > 0)
		append_text_to_file2(argv[2], O_CREAT | O_WRONLY | O_TRUNC, buff);

	ret = read_textfile2(fd, argv[1], 1024, buff);
	while (ret > 0)
	{
		append_text_to_file2(argv[2], O_WRONLY | O_APPEND, buff);
		ret = read_textfile2(fd, argv[1], 1024, buff);
	}

	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}

	return (0);
}

/**
 * append_text_to_file2 - appends text at the end of a file.
 *
 * @filename: is the name of the file.
 * @options: accessing options.
 * @text_content: is a NULL terminated string to add at the end of the file.
 *
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file2(const char *filename, int options, char *text_content)
{
	int fd; /* file descriptor */
	ssize_t written_bytes = 0;
	size_t count = 0;

	fd = open(filename, options, 00664);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}

	if (text_content != NULL)
	{
		while (text_content[count] != '\0')
			count++;

		written_bytes = write(fd, text_content, count);

		if (written_bytes == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
			exit(99);
		}
	}

	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}

	return (1);
}

/**
 * read_textfile2 -  reads a text file and
 * prints it to the POSIX standard output.
 *
 * @fd: file descriptor of file to write.
 * @filename: filename of name to read.
 * @lettrs: numbers of letters to read and write.
 * @buff: buffer where the readed data will be stored.
 *
 * Return: 1 if success.
 */

ssize_t read_textfile2(int fd, const char *filename, size_t lettrs, char *buff)
{
	ssize_t ret = 0;

	ret = read(fd, buff, lettrs); /* numbers of readed bytes*/

	if (ret == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}

	buff[ret] = '\0';

	return (ret);
}
