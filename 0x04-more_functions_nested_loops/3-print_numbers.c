#include "main.h"
/**
 * print_numbers - prints numbers from
 * 1 to 9
 *
 * Return: void
 */
void print_numbers(void)
{
	int index = 0;

	while (index < 10)
	{
		_putchar(index + '0');
		index++;
	}
	_putchar(10);
}
