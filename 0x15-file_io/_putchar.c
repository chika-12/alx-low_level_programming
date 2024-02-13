#include "main.h"
/**
 * _putchar - prints a character to stdout
 * @c: argumenet to function
 * Return: int
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
