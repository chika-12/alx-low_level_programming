#include "main.h"
/**
 * print_number - prints number using putchar
 *
 * @n: parameter to function
 * Return: void
 */
void print_number(int n)
{
	unsigned int new_num;

	if (n < 0)
	{
		new_num = -n;
		_putchar('-');
	}
	else
	{
		new_num = n;
	}
	if (new_num / 10)
	{
		print_number(new_num / 10);
	}
	_putchar((new_num % 10) + 48);
}
