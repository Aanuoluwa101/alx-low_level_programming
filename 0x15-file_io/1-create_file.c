#include "main.h"


/**
 * create_file - a function that creates a file
 * @filename: name of the file to be created
 * @text_content: the content of the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int num_wr, nletters, fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	nletters = 0;
	while (text_content[nletters])
		nletters++;

	num_wr = write(fd, text_content, nletters);

	if (num_wr == -1)
		return (-1);

	close(fd);

	return (1);
}
