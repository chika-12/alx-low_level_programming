#include "main.h"
/**
 * print_line - printing lines on the terminal
 * @n: parameter
 * Return: void
 */

void print_line(int n)
{
	int line;

	for (line = 1; line <= n; line++)
	{
		_putchar('_');
	}
	_putchar(10);
}
