#ifndef DOG_H
#define DOG_H

/**
* struct dog - a type that holds information about a dog
* @name: the name of the dog
* @age: dog age
* @owner: name of dog owner
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
int _strlen(char *s);
char *_strdup(char *str);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif /* DOG_H */


