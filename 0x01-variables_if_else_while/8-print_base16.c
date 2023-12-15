#include <stdio.h>

/**
 * main - prints hexadecimal numbers
 *
 * Return: Always 0(Success)
 *
 */
int main(void)
{
	int num = 48;
	char alp;

	while (num <= 57)
	{
		putchar(num);
		num++;
	}
	for (alp = 'a'; alp <= 'f'; alp++)
	{
		putchar(alp);
	}
	putchar(10);
	return (0);
}
