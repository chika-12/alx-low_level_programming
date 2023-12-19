#include "main.h"
/**
 * times_table - Prints the times table
 * to nine times
 *
 * Return: void
 *
 */
void times_table(void)
{
	int row = 0;
	int col;
	int product;

	while (row <= 9)
	{
		for (col = 0; col <= 9; col++)
		{
			product = row * col;

			if (col == 0)
			{
				_putchar(product + 48);
			}
			else if (product > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((product / 10) + 48);
				_putchar((product % 10) + 48);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(product + 48);
			}

		}
		_putchar(10);
		row++;
	}
}
