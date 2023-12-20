#include <stdio.h>
/**
 * main - prints the first
 * fifty fibbonacc numbers
 *
 * Return: 0
 */
int main(void)
{
	int index;
	long int num;
	long int var;
	long int fib;

	for (index = 1; index <= 50; index++)
	{
		if (index == 1)
		{
			var = index;
			printf("%ld", var);
		}
		else if (index == 2)
		{
			num = index;
			printf("%ld", num);
		}
		else
		{
			fib = num + var;
			printf("%ld", fib);
			var = num;
			num = fib;
		}
		if (index != 50)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
