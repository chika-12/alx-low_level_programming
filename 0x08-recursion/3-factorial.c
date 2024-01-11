#include "main.h"
/**
 * factorial - prints the factorial of a number
 *
 * @n: input
 * Return: integer
 */
int factorial(int n)
{
	if (n < 1)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}

