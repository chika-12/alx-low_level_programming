#include "search_algos.h"
/**
 * linear_search - returns the index of the target value
 * @array: array to be sorted
 * @size: size of array
 * @value: the value to be searched for
 * Return: integer
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index;

	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (array[index] == value)
		{
			return (index);
		}
	}
	return (-1);
}
