#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: parameter
 * @s2: parameter
 * Return: integer
 */
int _strcmp(char *s1, char *s2)
{
	int index;
	int flag = 0;

	for (index = 0; s1[index] != '\0' && s2[index] != '\0'; index++)
	{
		if (s1[index] != s2[index])
		{
			flag = s1[index] - s2[index];
			break;
		}
	}

	return (flag);
}
