#include <stdio.h>

/**
 * main - prints numbers
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
		if (num != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar(10);
	return (0);
}
