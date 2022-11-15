#include <stdio.h>
#include "dog.h"

/**
* print_dog - a function that prints a struct dog
* @d: a pointer to the struct dog
*/


void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)\n");
		}
		else
		{
			printf("Name: %s\n", d->name);
		}
		if (!d->age || d->age <= 0)
		{
			printf("(nil)\n");
		}
		else
		{
			printf("Age: %f\n", d->age);
		}
		if (d->owner == NULL)
		{
			printf("(nil)\n");
		}
		else
		{
			printf("Owner: %s\n", d->owner);
		}
	}
}
