#include "main.h"

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: the filename
 * @text_content: the text to be appended
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int nletters, fd, nwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY || O_APPEND);

	if (fd == -1)
		return (-1);

	if (!text_content)
	{
		close(fd);
		return (1);
	}

	nletters = 0;
	while (text_content[nletters])
		nletters++;

	nwr = write(fd, text_content, nletters);

	if (nwr == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
