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

	for (index = 0; accept[index] != '\0'; index++)
	{
		for (idx = 0; s[idx] != '\0'; idx++)
		{
			if (accept[index] == s[idx])
			{
				len += 1;
				break;
			}
		}
	}
	return (len);
}
