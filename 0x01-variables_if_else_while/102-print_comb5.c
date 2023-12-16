#include <stdio.h>

/**
 * main - prints combination
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	int num;
	int num1;

	for (num = 0; num < 100; num++)
	{
		for (num1 = 0; num1 < 100; num1++)
		{
			if (num < num1)
			{
				putchar((num / 10) + 48);
				putchar((num % 10) + 48);
				putchar(' ');
				putchar((num1 / 10) + 48);
				putchar((num1 % 10) + 48);
				if (num != 98 || num1 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar(10);
	return (0);
}
