#include "main.h"
/**
 * str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr = NULL;
	int index;
	int length = strlen(s1) + strlen(s2);
	int len = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	ptr = malloc(sizeof(char) * (length + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (index = 0; s1[index] != '\0'; index++)
		{
			ptr[index] = s1[index];
		}
		len = strlen(s1);
		for (index = 0; s2[index] != '\0'; index++, len++)
		{
			ptr[len] = s2[index];
		}
	}
	return (ptr);
}
