#include "main.h"
/**
 * more_numbers - prints from 1 to 14
 * Return: void
 */
void more_numbers(void)
{
	int num;
	int index = 0;

	while (index < 10)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
				_putchar((num / 10) + 48);
			}
				_putchar((num % 10) + 48);

		}
		_putchar(10);
		index++;
	}
}
