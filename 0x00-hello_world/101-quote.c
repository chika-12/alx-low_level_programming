#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - Understanding the use of write
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora kopar, 2015-10-19\n", 59);
	return (1);
}
