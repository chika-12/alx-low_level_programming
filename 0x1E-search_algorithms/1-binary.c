#include "search_algos.h"
/**
 * binary_search - sorts and search
 * @array: Array to be searched
 * @size: Size of array
 * @value: Value searched for
 * Return: integer
 */

int binary_search(int *array, size_t size, int value)
{
	size_t start = 0;
	size_t end = size - 1;
	size_t index;

	if (array == NULL)
	{
		return (-1);
	}

	while (start <= end)
	{
		size_t mid = start + (end - start) / 2;

		printf("Searching in array: ");
		for (index = start; index <= end; index++)
		{
			printf("%d", array[index]);
			if (index < end)
			{
				printf(", ");
			}
		}
		printf("\n");

		if (array[mid] < value)
		{
			start = mid + 1;
		}
		else if (array[mid] > value)
		{
			end = mid - 1;
		}
		else
		{
			return (mid);
		}
	}
	return (-1);

}
