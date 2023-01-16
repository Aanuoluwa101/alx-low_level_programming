#include "main.h"

/**
* _strcat - concatenates two strings
* @dest: the first string
* @src:L the second string
* Return: a pointer to dest
*/

char *_strcat(char *dest, char *src)
{
	int i;
	int j;
	int  d_len;
	int s_len;

	d_len = _strlen(dest);
	s_len = _strlen(src);

	for (i = 0, j = d_len ; (i <= s_len + 1) && (j <= d_len + s_len); i++, j++)
		dest[j] = src[i];

	return (*&dest);
}
