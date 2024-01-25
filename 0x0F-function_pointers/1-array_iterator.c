#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - prints array
 * @array: variable containing the array
 * @size: array size
 * @action: function pointers
 * Return: Array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
