#include "main.h"
/**
 * _strlen - prints the length of a string
 *
 * @s: parameter
 *
 * Return: integer
 */
int _strlen(char *s)
{
	int index;
	int len;

	len = 0;

	for (index = 0;  s[index] != '\0'; index++)
	{
		len += 1;
	}
	return (len);
}
