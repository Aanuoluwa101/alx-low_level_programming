#include "dog.h"
#include <stdio.h>

/**
* init_dog - a function that initializes a variable of type
* struct dog
* @d: a pointer to struct dog
* @name: a pointer to dog name
* @owner: a pointer to dog ownwer's name
* @age: dog's age
*
* Return: nothing
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		if (name != NULL)
			d->name = name;
		if (age || !(age < 0))
			d->age = age;
		if (owner != NULL)
			d->owner = owner;
	}
}
