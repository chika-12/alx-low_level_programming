#include "main.h"
/**
 * _memset - A function that fills a memory with a constant byte
 * @s: parameter
 * @b: parameter
 * @n: parameter
 * Return: character
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		s[index] = b;
	}
	return (s);
}
