#include <stdio.h>

/**
 * main - print numbers
 *
 * Return: Always 0(Success)
 *
 */
int main(void)
{
	int num1;
	int num2;

	for (num1 = 48; num1 <= 57; num1++)
	{
		for (num2 = 49; num2 <= 57; num2++)
		{
			if (num1 < num2 && num1 != num2)
			{
				putchar(num1);
				putchar(num2);
				if (num1 != 56)
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
