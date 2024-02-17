#include "main.h"
/**
 * _strpbrk - searches a string for any set of byte
 * @s: string parameter
 * @accept: string parameter
 * Return: a pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int index;
	int idx;
	char *ptr = NULL;

	for (index = 0; s[index] != '\0'; index++)
	{
		for (idx = 0; accept[idx] != '\0'; idx++)
		{
			if (s[index] == accept[idx])
			{
				ptr = &s[index];
				return (ptr);
			}
		}
	}
	return (ptr);
}

