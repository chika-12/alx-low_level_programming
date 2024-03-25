#include "main.h"
/**
 * _strstr - Locates a substring
 * @haystack: main string
 * @needle: substring
 * Return: pointer to the begining of the substring in the main string
 */
char *_strstr(char *haystack, char *needle)
{
	int index;
	int i;
	char *ptr = NULL;

	if (needle == NULL || *needle == '\0')
	{
		return (haystack);
	}
	for (index = 0; haystack[index] != '\0'; index++)
	{
		for (i = 0; needle[i] != '\0' && haystack[index + i] == needle[i]; i++)
		{
			if (haystack[index + 1] != needle[i + 1])
			{
				break;
			}
			if (needle[i + 1] != '\0')
			{
				ptr = &haystack[index];
				return (ptr);
			}
		}
	}
	return (ptr);
}
