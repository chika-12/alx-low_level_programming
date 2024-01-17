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
	int length = strlen(s1) + strlen(s2);

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	ptr = (char *)malloc(sizeof(char) * (length + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		strcpy(ptr, s1);
		strcpy(ptr, s2);
	}
	return (ptr);
}
