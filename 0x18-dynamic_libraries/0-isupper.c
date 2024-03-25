#include "main.h"
/**
 * _isupper - checks for uppercase
 *
 * @c: parameter
 *
 * Return: integer
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
