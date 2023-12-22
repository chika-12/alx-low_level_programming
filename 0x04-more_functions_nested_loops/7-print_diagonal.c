#include "main.h"
/**
 * print_diagonal - print diagonal line on the terminal
 * @n: parameter
 * Return: void
 */
void print_diagonal(int n)
{
	int line;
	int space;

	if (n > 0)
	{
		for (line = 1; line <= n; line++)
		{

			for (space = 1; space < line; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}
