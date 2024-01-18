#include "main.h"
/**
 * str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: char
 */
int _strlen(char *str);
char *str_concat(char *s1, char *s2)
{
	size_t index;
	size_t len = 0;
	char *ptr = NULL;
	size_t length;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	length = _strlen(s1) + _strlen(s2);
	ptr = (char *)malloc(sizeof(char) * (length + 1));
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
		len = index;
		for (index = 0; s2[index] != '\0'; index++, len++)
		{
			ptr[len] = s2[index];
		}
		ptr[len] = '\0';
	}
	return (ptr);
}
int _strlen(char *str)
{
	int index;
	int len = 0;

	for (index = 0; str[index] != '\0'; index++)
	{
		len += 1;
	}
	return (len);
}
