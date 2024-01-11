#include "main.h"
/**
 * _sqrt_recursion - prints the square root of
 * different numbers
 * @n: number parameter
 * @x: parameter
 *
 * Return: interger
 */
int recursion_help(int n, int x);
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (recursion_help(n, 1));
	}
}
/**
 * recursion_help - calculates the square root of a number
 * @n: parameter
 * @x: parameter
 * Return: integer
 */
int recursion_help(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}
	else if (x * x > n)
	{
		return (-1);
	}
	else
	{
		return (recursion_help(n, x + 1));
	}
}
