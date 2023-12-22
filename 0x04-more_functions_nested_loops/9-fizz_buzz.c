#include "main.h"
/**
 * main - prints fizzbuzz
 * Return: 0
 */
int main(void)
{
	int numbers = 100;
	int number;

	for (number = 1; number <= numbers; number++)
	{
		if (number % 3 == 0 && number % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (number % 3 == 0 && number % 5 != 0)
		{
			printf("Fizz");
		}
		else if (number % 3 != 0 && number % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", number);
		}
		if (number != numbers)
		{
			printf(" ");
		}
	}
	return (0);
}

