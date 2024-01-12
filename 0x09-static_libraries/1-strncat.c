#include "main.h"
/**
 * _strncat - concatenates a specified amount
 * of chars to dest string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to be appended
 * Return: chars
 */
char *_strncat(char *dest, char *src, int n)
{
	int len;
	int index;

	len = 0;

	/*Find length of dest string*/
	for (index = 0; dest[index] != '\0'; index++)
	{
		len += 1;
	}
	/*Contenation of n bytes to dest*/
	for (index = 0; index < n && src[index] != '\0'; index++)
	{
		dest[len] = src[index];
		len += 1;
	}
	dest[len] = '\0';
	return (dest);
}
