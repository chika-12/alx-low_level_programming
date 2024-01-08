#include "main.h"
/**
 * _memcpy - copies n bytes of string
 *
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 * Return: character
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n && src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}
	for (; index < n; index++)
	{
		dest[index] = '\0';
	}
	return (dest);
}
