#include "main.h"
/**
 * main - prints the addition of two numbers
 * @argc: argument count
 * @argv: argument velocity
 *
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int index;
	int idx;
	int add = 0;

	if (argc < 2)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (index = 1; index < argc; index++)
		{
			for (idx = 0; argv[index][idx] != '\0'; idx++)
			{
				if (!isdigit(argv[index][idx]))
				{
					printf("Error\n");
					return (1);
				}
			}
			add += atoi(argv[index]);
		}
		printf("%d\n", add);
	}
	return (0);
}
