#include "main.h"
/**
 * _calloc - allocates memory for an array
 * @arr: number of element
 * @b: size of element
 * @num: number of byte
 * Return: memory allocated
 */
char *_memset(char *arr, char b, unsigned int num);
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr = NULL;

	__attribute__((unused)) unsigned int index;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	_memset(ptr, 0, nmemb * size);
	return (ptr);
}
/**
 * _memset - fills the specified memory location
 * with specified chars to a specified number of byte
 * @arr: memory location
 * @b: character
 * @num: number of byte
 * Return: char
 */
char *_memset(char *arr, char b, unsigned int num)
{
	unsigned int index;

	for (index = 0; index < num; index++)
	{
		arr[index] = b;
	}
	return (arr);
}
