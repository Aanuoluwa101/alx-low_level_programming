#include <stdio>

/**
 * This is a program that prints the size of various types
 * in the computer it is compiled and run on
 */
int main(void)
{
	printf("Size of a char: %lu bytes(s)\n", (unsigned long)sizeof(char));
        printf("Size of an int: %lu bytes(s)\n", (unsigned long)sizeof(int));
        printf("Size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(long int));
        printf("Size of a long long int: %lu bytes(s)\n", (unsigned long)sizeof(long long int));
        printf("Size of a float: %lu bytes(s)", (unsigned long)sizeof(float));int main(void));
	return(0);
}
