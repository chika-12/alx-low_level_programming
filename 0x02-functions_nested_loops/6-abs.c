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
	int count = 0;
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			count += 1;
		}
	}
	else if (n < 0)
	{
		for (i = n; i < 0; i++)
		{
			count += 1;
		}
	}
	else if (n == INT_MAX)
	{
		count = INT_MAX;
	}
	return (count);
}
