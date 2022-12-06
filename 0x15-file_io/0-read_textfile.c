#include <stdio.h>
#include <sys/types.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

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
	int fd, ch, num, count;
	char c;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	num = letters;
	count = 0;
	ch = read(fd, &c, 1);
	while (ch != -1 && ch != 0 && num > 0)
	{
		count++;
		num--;
		write(STDOUT_FILENO, &c, 1);
		ch = read(fd, &c, 1);
	}
	close(fd);
	return (count);
}

