#include <stddef.h>
#include "dog.h"
/**
 * init_dog -  initialize a variable of type struct dog
 * @d: struct dog
 * @name: puppy's name
 * @age: puppy's age
 * @owner: puppy's owner
 * Return: void
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
