#include "main.h"
/**
 * print_to_98 - Prints numbers from n to 98
 * @n: parameter
 * Return: void
 */
void print_to_98(int n)
{
	int index;
	int index2;

	if (n < 98 || n == 98)
	{
		for (index = n; index <= 98; index++)
		{
			if (index > 9)
			{
				_putchar((index / 10) + 48);
				_putchar((index % 10) + 48);
			}
			else if (index < 0)
			{
				index2 = -index;
				if (index2 > 9)
				{
					_putchar('-');
					_putchar((index2 / 10) + 48);
					_putchar((index2 % 10) + 48);
				}
				else
				{
					_putchar('-');
					_putchar(index2 + 48);
				}
			}
			else
			{
				_putchar(index + 48);
			}
			if (index != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
		for (index = n; index >= 98; index--)
		{
			if (index > 99)
			{
				_putchar((index / 100) + 48);
				_putchar(((index % 100) / 10) + 48);
				_putchar((index % 10) + 48);
			}
			else
			{
				_putchar((index / 10) + 48);
				_putchar((index % 10) + 48);
			}
			if (index != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	_putchar(10);
}
