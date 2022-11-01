#include "main.h"

/**
* set_string - sets the value of a pointer to a char.
* @s: the pointer to the pointer to be set
* @to: the pointer to the character to which s is to be set
*
* Return: nothing
*/

void set_string(char **s, char *to)
{
	*s = to;
}
