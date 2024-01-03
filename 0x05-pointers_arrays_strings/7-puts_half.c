#include "main.h"
/**
 * puts_half - prints half of a string
 *
 * @str: parameter
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len;
	int index;
	int half_len;

	len = 0;

	for (index = 0; str[index] != '\0'; index++)
	{
		len += 1;
	}

	if (len % 2 == 0)
	{
		half_len = len / 2;
	}
	else
	{
		half_len = len  / 2
	}

	for (index = half_len; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}
	_putchar(10);
}
