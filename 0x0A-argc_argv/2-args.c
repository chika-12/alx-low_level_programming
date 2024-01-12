#include "main.h"
/**
 * main - print all command line arguments recieved
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int index;

	if (argc > 0)
	{
		for (index = 0; index < argc; index++)
		{
			printf("%s\n", argv[index]);
		}
	}
	return (0);
}
