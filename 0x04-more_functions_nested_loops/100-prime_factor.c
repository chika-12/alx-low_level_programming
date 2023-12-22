#include "main.h"
/**
 * main - prints the largest prime number
 * of 612852475143.
 * Return: integer
 */
int main(void)
{
	long int number = 612852475143;
	int index;
	int new_idx;
	long int prime;

	for (index = 2; index <= number; index++)/*Iteration to check for factors */
	{
		/*To check for factors of number*/
		if (number % index == 0)
		{
			for (new_idx = 2; new_idx < index; new_idx++)
			{
				/*Checking if factor is not a prime number*/
				if (index % new_idx == 0)
				{
					break;
				}
			}
			if (new_idx == index)
			{
				prime = index;
				while (number % index == 0)
				{
					number /= index;
				}

			}
		}
	}
	printf("%ld\n", prime);
	return (0);
}
