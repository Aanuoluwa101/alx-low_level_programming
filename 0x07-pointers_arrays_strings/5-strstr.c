#include "main.h"

/**
* _strstr - locates a substring
* @haystack: the string to be searched
* @needle: the substring
* Return: a pointer to the beginning of the located substring,
* or NULL if the substring is not found.
*/

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int k;
	int s_len;
	int n_len;
	char n;

	s_len = _strlen(haystack);
	n_len = _strlen(needle);
	n = needle[0];

	for (i = 0; haystack[i]; i++)
	{
		if (haystack[i] == n)
		{
			if (s_len - i >= n_len)
			{
				for (j = i, k = 0; k < s_len && j < n_len; j++, k++)
					if (haystack[j] != needle[k])
						break;
				if (k == n_len)
					return (&haystack[i]);
			}
		}
	}
	return ('\0');
}


/**
* _strlen - finds the length of a string
* @s: the string in question
* Return: the length of string s
*/

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		count++;
	}

	return (count);
}

