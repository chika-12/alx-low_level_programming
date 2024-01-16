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

	if (str == NULL)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(char) * (strlen(str) + 1));

	if (ptr == NULL)
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
