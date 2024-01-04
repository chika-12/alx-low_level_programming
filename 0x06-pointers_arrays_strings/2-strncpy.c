#include "main.h"
/**
 * _strncpy - copie n bytes into dest string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len;
	int index;

	len = 0;

	for (index = 0; index < n && src[index] != '\0'; index++)
	{
		dest[index] = src[index];
		len += 1;
	}
	dest[len] = '\0';
	return (dest);
}

