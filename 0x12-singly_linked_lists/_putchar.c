#include "lists.h"
/**
 * _putchar - print a character to stdout
 * @c: argument to function
 * Return: integer
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
