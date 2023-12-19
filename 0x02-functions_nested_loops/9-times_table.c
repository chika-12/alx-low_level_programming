#include "main.h"
/**
 * times_table - Prints the nine times table
 *
 * Return: void
 *
 */
void times_table(void)
{
	int row;
	int col;
	int multiple;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			multiple = row * col;
			if (multiple > 9)
			{
				_putchar((multiple / 10) + 48);
				_putchar((multiple % 10) + 48);
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(multiple + 48);
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar(10);
	}
}

