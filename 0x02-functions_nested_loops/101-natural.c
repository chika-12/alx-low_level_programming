#include <stdio.h>
#include <stdlib.h>
/**
 * main - computes the  sum of
 * the multiples of 5 and 3
 *
 * Return: 0
 */
int main(void)
{
	int index;
	double count;

	for (index = 0; index < 1024; index++)
	{
		if (index % 3 == 0 || index % 5 == 0)
		{
			count += index;
		}
	}
	printf("%0.f\n", count);
	return (0);
}

