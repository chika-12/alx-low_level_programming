#include <stdio.h>

/**
 * main - Prints both uppercase
 * and lowercse alphabets
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar(10);
	return(0);
}
