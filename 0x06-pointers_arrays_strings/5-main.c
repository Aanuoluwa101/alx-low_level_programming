#include "main.h"
#include <stdio.h>

int main(void)
{
	char s1[] = "look up\n";
	char *ptr;

	ptr = string_toupper(s1);
	printf("%s", ptr);
	printf("%s", s1);
	return(0);
}

