#include "main.h"
/**
 * main - mutiplies two numbers
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int multiple;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		multiple = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", multiple);
	}
	return (0);
}

