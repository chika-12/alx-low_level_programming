#include "dog.h"
#include <stdio.h>
/**
 * init_dog - initializes a dog
 * @d: parameter
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 * Return: struct dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
