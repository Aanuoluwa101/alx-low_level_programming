#include "main.h"
#include <stdio.h>

int main(void)
{
	char s[98] = "what is up";
	char *ptr;


	printf("%s\n", s);
	ptr = _strncpy(s, "that", 4);
	printf("%s\n", s);
	printf("%s\n", ptr);
	printf("%d\n", ptr[-1]);
	return (0);
}
