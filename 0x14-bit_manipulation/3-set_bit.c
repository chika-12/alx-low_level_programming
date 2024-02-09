#include "main.h"
/**
 * set_bit - sets the bit
 * @n: parameter
 * @index: parameter
 * Return: 0
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int help;

	if (index >= (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}
	help = (1UL << index);
	*n = *n | help;
	return (1);
}
