#include "main.h"
/**
 * main - print the number of arguments passed to
 * the function
 * @argc: argument count
 * @argv: argument vector
 * Return: integer
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int index;
	int len = 0;

	if (argc == 1)
	{
		printf("%d\n", len);
	}
	else if (argc > 1)
	{
		for (index = 1; index < argc; index++)
		{
			len += 1;
		}
		printf("%d\n", len);
	}
	return (0);
}
