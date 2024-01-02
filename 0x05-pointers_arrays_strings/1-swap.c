#include "main.h"
/**
 * swap_int - swaps numbers
 * @a: parameter to function
 * @b: parameter to function
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
