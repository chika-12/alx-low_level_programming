#include <stdio.h>

/**
 * main - prints alphabets in reverse
 *
 * Return: Always 0(Success)
 *
 */
int main(void)
{
	char alph;

	for (alph = 122; alph >= 97; alph--)
	{
		putchar(alph);
	}
	putchar(10);
	return (0);
}
