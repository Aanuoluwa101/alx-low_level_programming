#include "dog.h"
#include <stdlib.h>

/**
* free_dog - a function that frees dog
* @d: the pointer to the dog
*/

void free_dog(dog_t *d)
{
	free(d);
}
