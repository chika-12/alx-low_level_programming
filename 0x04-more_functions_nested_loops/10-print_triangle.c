#include "main.h"
/**
 * print_triangle - prints triangle
 *
 * @size: size of triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int triangle;
	int space;
	int index;

	if (size > 0)
	{
		int new_size = size;

		for (index = 1; index <= size; index++)
		{
			for (space = 1; space <= new_size - 1; space++)
			{
				_putchar(' ');
			}
			for (triangle = 1; triangle <= index; triangle++)
			{
				_putchar('#');
			}
			_putchar(10);
			new_size -= 1;
		}
	}
	else
	{
		_putchar(10);
	}
}
