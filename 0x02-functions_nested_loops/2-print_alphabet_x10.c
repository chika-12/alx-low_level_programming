#include "main.h"
/**
 * print_alphabet_x10 - Prints alphabet 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int n = 0;
	char alph;

	while (n <= 10)
	{
		for (alph = 97; alph <= 122; alph++)
		{
			_putchar(alph);
		}
		_putchar(10);
		n++;
	}
}
