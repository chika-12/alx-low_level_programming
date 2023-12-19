#include "main.h"
/**
 * _islower - checks for lowercase alphabets
 *
 * @c: parameter
 *
 * Return: void
 */
int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
	{
		return (1);
	}
	return (0);
}
