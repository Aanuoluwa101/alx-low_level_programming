#include "main.h"

/**
 * read_textfile - reads a text file and
 * prints it to the POSIX standard output.
 * @filename: the name of the file to be read
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 * or 0 if filename is null or file can not be read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, c_write, c_read;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
	{
		close(fd);
		return (0);
	}

	c_read = read(fd, buf, letters);
	if (c_read == -1)
	{
		close(fd);
		return (0);
	}
	c_write = write(STDOUT_FILENO, buf, c_read);
	if (c_write == -1 || c_write < c_read)
	{
		close(fd);
		return (0);
	}
	close(fd);
	return (c_write);
}

