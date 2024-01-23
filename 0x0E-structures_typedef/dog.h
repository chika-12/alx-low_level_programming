#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>
/**
 * dog_t - defines a new dog
 */
typedef struct dog_t;
/**
 * struct dog - Defines a dog
 * @name: parameter
 * @age: parameter
 * @owner: parameter
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
