#include "main.h"
/**
 * _strchr - Return a pointer to the first occurence of a character
 *
 * @s: string
 *
 * @c: character
 *
 * Return: character
 */
char *_strchr(char *s, char c)
{
	unsigned int index;
	int len = 0;

	for (index = 0; s[index] != '\0'; index++)
	{
		len += 1;
	}
	if (c == '\0')
	{
		return (&(s[len]));
	}
	else
	{

		for (index = 0; s[index] != '\0'; index++)
		{
			if (s[index] == c)
			{
				return (&(s[index]));
			}
		}
	}
	return (NULL);
}
