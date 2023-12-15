#include <stdio.h>
/**
 * main - Prints all alphabets except
 * q and e
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	char alphabet = 97;

	while (alphabet <= 122)
	{
		if (alphabet != 101 && alphabet != 113)
		{
			putchar(alphabet);
		}
		alphabet++;
	}
	putchar(10);
	return (0);
}
