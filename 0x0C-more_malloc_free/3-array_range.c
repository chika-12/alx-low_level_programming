#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: minimum number
 * @max: maximum number
 *
 * Return: integer
 */
int *array_range(int min, int max)
{
	int *ptr = NULL;
	int index;
	int new_idx = 0;

	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (index = min; index <= max; index++)
	{

		ptr[new_idx] = index;
		new_idx += 1;
	}
	return (ptr);
}
