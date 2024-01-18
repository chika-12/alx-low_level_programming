#include "main.h"
/**
 * alloc_grid - prints a two dimentional array
 * @width: width of the array
 * @height: height of the array
 * Return: int
 */
int **alloc_grid(int width, int height)
{
	int **ptr = NULL;
	int index;
	int idx;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ptr = (int **) malloc(sizeof(int *) * height);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (index = 0; index < height; index++)
	{
		ptr[index] = (int *)malloc(sizeof(int) * width);
		if (ptr[index] == NULL)
		{
			for (idx = 0; idx < width; idx++)
			{
				free(ptr[idx]);
			}
			free(ptr);
			return (NULL);
		}
	}

	for (index = 0; index < height; index++)
	{
		for (idx = 0; idx < width; idx++)
		{
			ptr[index][idx] = 0;
		}
	}
	return (ptr);
}
