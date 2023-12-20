#include "main.h"
/**
 * print_times_table - Prints times table
 * @n: parameter*
 * Return: void
 */
void print_times_table(int n)
{
	if (n < 15 && n > 0)
	{
		int row, col, product;

		for (row = 0; row <= n; row++)
		{
			_putchar(48);
			for (col = 1; col <= n; col++)
			{
				product = row * col;
				_putchar(',');
				if (product > 9 && product < 100)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((product / 10) + 48);
					_putchar((product % 10) + 48);
				}
				else if (product > 99)
				{
					_putchar(' ');
					_putchar((product / 100) + 48);
					_putchar(((product % 100) / 10) + 48);
					_putchar((product % 10) + 48);
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(product + 48);
				}
			}
			_putchar(10);
		}
	}
}
