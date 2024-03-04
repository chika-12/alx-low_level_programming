#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the sum of the even
 * fibonacci sequence
 * Return: int
 */
int main(void)
{
	int a = 1;
	int b = 2;
	int tmp;
	int sum = 0;

	while (a < 4000000)
	{
		if (a % 2 == 0)
		{
			sum += a;
		}
		tmp = a + b;
		a = b;
		b = tmp;
	}
	printf("%d\n", sum);
	return (0);
}
