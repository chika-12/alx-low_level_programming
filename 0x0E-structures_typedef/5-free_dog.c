#include "dog.h"
/**
 * free_dog - frees a dog
 * @d: dog to be freed
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
