#include "dog.h"
#include <stdlib.h>

/**
* new_dog - a function that creates a new dog
* @name: pointer to the name of the dog
* @age: age of the dog
* @owner: pointer to the name of the owner of the dog
*
* Return: a pointer to a new dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *dog_name;
	char *dog_owner;

	dog_name = malloc(_strlen(name) + 1);
	dog_owner = malloc(_strlen(owner) + 1);

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL || dog_name == NULL || dog_owner == NULL)
	{
		return (NULL);
	}
	else
	{
		new_dog->name = name;
		new_dog->age = age;
		new_dog->owner = owner;
		dog_name = _strdup(name);
		dog_owner = _strdup(owner);
	}
	return (new_dog);
}


/**
* _strdup - returns a pointer to a newly allocated space in memory,
* which contains a copy of the string given as a parameter.
* @str: the string to be copied
*
* Return: a pointer to the newly allocated space in memory
*/

char *_strdup(char *str)
{
	char *ptr;
	int i;

	if (str == NULL)
		return (NULL);

	ptr = malloc(_strlen(str) + 1);

	if (ptr != NULL)
	{
		for (i = 0; i <= _strlen(str); i++)
			ptr[i] = str[i];
	}
	else
	{
		return (NULL);
	}
	return (ptr);
}


/**
* _strlen - finds the length of a string
* @s: the string in question
* Return: the length of string s
*/

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		count++;
	}

	return (count);
}

