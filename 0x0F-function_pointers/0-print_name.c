#include "function_pointers.h"
#include <stdlib.h>

/**
* print_name - a function that prints a name
* @name: a pointer to the name
* @f: a pointer to the function that does the printing
*
* Return: nothing
*/

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}


