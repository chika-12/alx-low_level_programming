#include "main.h"
/**
 * print_most_numbers - prints most numbers
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		if (num != 2 && num != 4)
		{
			_putchar(num + 48);
		}
	}
	_putchar('\n');
}
