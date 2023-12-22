#include "main.h"
/**
 * print_square - prints size numbers of squares
 * size numbers of times
 *
 * @size: number of squares to be printed
 *
 * Return: This is a void function
 */

void print_square(int size)
{
	int row;
	int col;

	for (row = 1; row <= size; row++)
	{
		for (col = 0; col < size; col++)
		{
			_putchar('#');
		}
		_putchar(10);
	}
	_putchar(10);
}
