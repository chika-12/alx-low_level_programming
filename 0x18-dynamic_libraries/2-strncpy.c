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
	int index;

	for (index = 0; index < n; index++)
	{
		if (src[index] != '\0')
		{
			dest[index] = src[index];
		}
		else
		{
			while (index < n)
			{
				dest[index] = '\0';
				index++;
			}
		}
	}
	return (dest);
}

