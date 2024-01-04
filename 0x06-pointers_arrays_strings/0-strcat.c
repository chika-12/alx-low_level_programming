#include "main.h"
/**
 * _strcat - concatenate two strings
 *
 * @dest: parameter
 *
 * @src: parameter
 *
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int len;
	int index;

	len = 0;

	/* find the length of destination string*/
	for (index = 0; dest[index] != '\0'; index++)
	{
		len += 1;
	}
	/*concatenation*/
	for (index = 0; src[index] != 0; index++)
	{
		dest[len] = src[index];
		len += 1;
	}
	dest[len] = '\0';
	return (dest);
}

