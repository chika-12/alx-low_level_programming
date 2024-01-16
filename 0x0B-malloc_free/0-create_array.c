#include "main.h"
/**
 * create_array - creates an array after a call to malloc
 *
 * @size: Number of bytes to be allocated
 * @c: characters to be intialized into the allocated byte
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	unsigned int index;
	char *arr = NULL;

	arr = malloc(sizeof(char) * size);

	if (arr == NULL || size == 0)
	{
		return (NULL);
	}
	else
	{
		for (index = 0; index < size; index++)
		{
			arr[index] = c;
		}
	}
	return (arr);
}

