#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: a pointer to struct dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
