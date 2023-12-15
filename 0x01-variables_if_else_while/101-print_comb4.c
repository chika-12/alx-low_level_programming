#include <stdio.h>

/**
 * main - prints number
 *
 * Return: Always 0(Success)
 *
 */
int main(void)
{
	int num;
	int num1;
	int num2;

	for (num = 48; num <= 55; num++)
	{
		for (num1 = 49; num1 <= 56; num1++)
		{
			for (num2 = 50; num2 <= 57; num2++)
			{
				if (num < num1 && num1 < num2)
				{
					putchar(num);
					putchar(num1);
					putchar(num2);
					if (num != 55)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar(10);
	return (0);
}
