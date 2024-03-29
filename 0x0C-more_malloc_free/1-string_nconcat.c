#include"main.h"
/**
 * string_nconcat - Allocates memory for strings to be concatenated
 * @str: string
 * Return: returns a pointer to allocated memory
 */
unsigned int _strlen(char *str);
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr = NULL;
	unsigned int index, len, total_len;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len = _strlen(s1);
	if (n >= _strlen(s2))
	{
		n = _strlen(s2);
	}
	total_len = len + n;
	ptr = malloc(sizeof(char) * total_len + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (index = 0; s1[index] != '\0'; index++)
	{
		ptr[index] = s1[index];
	}
	len = index;
	for (index = 0; index < n; index++, len++)
	{
		ptr[len] = s2[index];
	}
	ptr[len] = '\0';
	return (ptr);
}
/**
 * _strlen - calculates the length of the string
 * @str: string parameter
 * Return: integer
 */
unsigned int _strlen(char *str)
{
	int index;
	int length = 0;

	for (index = 0; str[index] != '\0'; index++)
	{
		length += 1;
	}
	return (length);
}
