#include "dog.h"

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
	d->name = name;
	d->age = age;
	d->owner = owner;
}
