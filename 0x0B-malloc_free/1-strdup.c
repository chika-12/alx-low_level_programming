#include "main.h"
/**
 * _strdup - returns a pointer to a new string which is a duplicate
 * @str: string to be duplicated
 *
 * Return: char
 */
char *_strdup(char *str)
{
	char *ptr = NULL;
	int index;

	ptr = malloc(sizeof(char) * sizeof(str));

	if (ptr == NULL || str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (index = 0; str[index] != '\0'; index++)
		{
			ptr[index] = str[index];
		}
	}
	return (ptr);
}
