#include "main.h"
/**
 * _strspn - Returns the number of bytes in the initial
 * segment of s
 * @s: parameter
 * @accept: parameter
 * Return: integer
 */
unsigned int _strspn(char *s, char *accept)
{
	int index;
	int idx;
	unsigned int len = 0;

	for (index = 0; s[index] != '\0'; index++)
	{
		for (idx = 0; accept[idx] != '\0'; idx++)
		{
			if (accept[idx] == s[index])
			{
				len += 1;
				break;
			}
		}
		if (s[index] != accept[idx])
			break;
	}
	return (len);
}
