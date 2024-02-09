#include "main.h"
/**
 * get_bit - gets bit at index
 * @n: bit
 * @index: index
 * Return: 1 or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int help;
	int bit_value;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	help = (1UL << index);
	bit_value = (n & help) != 0 ? 1 : 0;

	return (bit_value);
}
