#include "main.h"
/**
 * print_number - print different numbers
 *
 * @number: parameter
 * Return: 0
 */
void print_number(int number)
{
	unsigned int new_num;

	if (number < 0)
	{
		new_num = -number;
		_putchar('-');
	}
	else
	{
		new_num = number;
	}
	if (new_num / 10)
	{
		print_number(new_num / 10);
	}
	_putchar((new_num % 10) + 48);
}
