#include "main.h"
#include <limits.h>
/**
 * _abs - Prints absolute value
 * of a number
 *
 * @n: parameter
 *
 * Return: (0);
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
