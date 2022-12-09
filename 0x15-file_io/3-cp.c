#include "main.h"

/**
 *cp - copies the content of one file to another file
 *@file_from: the file to be copied from
 *@file_to: the file to be copied to
 *
 * Return: 1 on success and differetn non-negative
 * error codes on failure
 */

int cp(const char* file_from, const char* file_to)
{
	if (ac != 3)
	{
		write(STDERR_FILENO, "Usage: cp file_from file_to\n", 28);
		exit(97);
	}

	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
	{
		write(STDERR_FILENO, Error: Can't read from file NAME_OF_THE_FILE", 32);
		exit(98);
	}

