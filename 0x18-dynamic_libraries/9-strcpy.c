#include "main.h"
/**
 * _strcpy - copies a string from src to dest
 * @dest: destination string
 * @src: source string
 *
 * Return: integer
 */
char *_strcpy(char *dest, char *src)
{
	size_t index;
	size_t len = 1;

	for (index = 0; src[index] != '\0'; index++)
	{
		len += 1;
	}
	for (index = 0; src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}
	if (index < len)
	{
		dest[index] = '\0';
	}
	return (dest);
}
