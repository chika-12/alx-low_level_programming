#include "main.h"
/**
 * print_sign - Prints the sign of a number
 *
 * @n: parameter
 *
 * Return: (0)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
