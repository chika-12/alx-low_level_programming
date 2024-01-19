#include "main.h"
/**
 * malloc_checked - A function that returns a pointer to the allocated
 * memory location
 * @b: parameter
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
