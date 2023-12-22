#include "main.h"
/**
 * print_number - prints numbers
 * @n: parameter passed to function
 * Return: void
 */
void print_number(int n)
{
	if (n > 999)
	{
		_putchar((n / 1000) + 48);
		_putchar(((n % 100) / 100) + 48);
		_putchar((((n % 100) % 100) / 10) + 48);
	}
	else if (n > 99 && n < 1000)
	{
		_putchar((n / 100) + 48);
		_putchar(((n % 100) / 10) + 48);
	}
	else if (n > 9 && n < 100)
	{
		_putchar((n / 10) + 48);
	}
	else if (n < 0)
	{
		n = -n;
		_putchar('-');
		if (n > 999)
		{
			_putchar((n / 1000) + 48);
			_putchar(((n % 100) / 100) + 48);
			_putchar((((n % 100) % 100) / 10) + 48);
		}
		else if (n > 99 && n < 1000)
		{
			_putchar((n / 100) + 48);
			_putchar(((n % 100) / 10) + 48);
		}
		else if (n > 9 && n < 100)
		{
			_putchar((n / 10) + 48);
		}
	}
	_putchar((n % 10) + 48);
}
