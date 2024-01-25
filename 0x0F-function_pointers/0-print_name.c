#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - A function that prints a name
 * @name: The name to be printed
 * @f: function pointer
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
