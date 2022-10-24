#include "main.h"
#include <stdio.h>

int main(void)
{
	char *str;
	int len;

	str = "john";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}


