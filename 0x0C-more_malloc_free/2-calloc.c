#include "main.h"
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of element
 * @size: size of element
 * Return: memory allocated
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr = NULL;
	unsigned int index;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < nmemb; index++)
	{
		ptr[index] = 0;
	}
	return (ptr);
}
