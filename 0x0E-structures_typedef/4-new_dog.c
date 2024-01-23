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
	int len_name = 0, len_owner = 0, index;

	fresh_dog = malloc(sizeof(dog_t));
	if (fresh_dog == NULL || name == NULL || owner == NULL)
	{
		free(fresh_dog);
		return (NULL);
	}
	for (index = 0; name[index] != '\0'; index++)
	{
		len_name += 1;
	}
	for (index = 0; owner[index] != '\0'; index++)
	{
		len_owner += 1;
	}
	fresh_dog->name = malloc(sizeof(len_name + 1));
	fresh_dog->owner = malloc(sizeof(len_owner + 1));
	if (fresh_dog->name == NULL || fresh_dog->owner == NULL)
	{
		free(fresh_dog->name);
		free(fresh_dog->owner);
		free(fresh_dog);
		return (NULL);
	}
	fresh_dog->age = age;
	for (index = 0; index < len_name; index++)
	{
		fresh_dog->name[index] = name[index];
	}
	for (index = 0; index < len_owner; index++)
	{
		fresh_dog->owner[index] = owner[index];
	}
	return (fresh_dog);
}
