#include "main.h"

/**
* _strncat - concatenates two strings
* @dest: the first string
* @src: the second string
* @n: the number of bytes from src to concatenate
* Return: a pointer to dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int d_len;
	int s_len;

	s_len = _strlen(src);
	d_len = _strlen(dest);

	if (n == s_len || (n > s_len && src[s_len] == '\0'))
	{
		for (i = 0; i <= s_len; i++)
			dest[s_len + i] = src[i];
	}
	else if (n < s_len)
	{
		for (i = 0; i < n; i++)
			dest[d_len + i] = src[i];
		dest[d_len + i] = '\0';
	}


	return (*&dest);
}
