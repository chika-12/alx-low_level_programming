#include "main.h"
/**
 * print_array - prints array of numbers
 *
 * @a: parameter
 * @n: parameter
 *
 * Return: integer
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);
		if (index != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
