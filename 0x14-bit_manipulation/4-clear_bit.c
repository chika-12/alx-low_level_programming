#include "main.h"
/**
 * clear_bit - clears the bit
 * @n: interger
 * @index: parameter
 * Return: 0
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	mask = ~(1UL << index);
	*n = *n & mask;
	return (1);
}
