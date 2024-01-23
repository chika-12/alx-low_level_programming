#include "dog.h"
/**
 * print_dog - prints dog
 * @d: struct dog
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)\n");
		}
		else
		{
			printf("Name: %s\n", d->name);
		}
		if (d->age == -1)
		{
			printf("Age: (nill)\n");
		}
		else
		{
			printf("Age: %f\n", d->age);
		}
		if (d->owner == NULL)
		{
			printf("Owner: (nill)\n");
		}
		else
		{
			printf("Owner: %s\n", d->owner);
		}
	}
	else
	{
		return;
	}
}
