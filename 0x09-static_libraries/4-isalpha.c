#include "main.h"
/**
 * _isalpha - Checks for lower and uppercase letters
 *
 * @c: parameter
 *
 * Return: (0);
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
