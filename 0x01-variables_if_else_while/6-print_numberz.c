#include <stdio.h>

/**
 * main - prints numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 48;

	while (num < 58)
	{
		putchar(num);
		num++;
	}
	putchar(10);
	return (0);
}
