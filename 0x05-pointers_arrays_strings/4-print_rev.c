#include "main.h"
/**
 * print_rev - prints a string in reverse
 *
 * @s: parameter
 * Return: void
 */
void print_rev(char *s)
{
	int index;
	int len;

	len = 0;

	for (index = 0; s[index] != '\0'; index++)
	{
		len += 1;
	}
	for (index = len - 1; s[index] >= 1; index--)
	{
		_putchar(s[index]);
	}
	_putchar(10);
}

