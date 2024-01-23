#include "dog.h"
#include <string.h>
/**
 * new_dog - print new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *fresh_dog;

	fresh_dog = malloc(sizeof(dog_t));
	if (fresh_dog == NULL)
	{
		return (NULL);
	}
	fresh_dog->age = age;
	fresh_dog->name = strdup(name);
	fresh_dog->owner = strdup(owner);
	return (fresh_dog);
}
