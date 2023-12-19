#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 *
 * Return: void
 */
void jack_bauer(void)
{
	int num1;
	int num2;
	int num3;
	int num4;

	for (num1 = 48; num1 <= 50; num1++)
	{
		for (num2 = 48; num2 <= 51; num2++)
		{
			for (num3 = 48; num3 <= 53; num3++)
			{
				for (num4 = 48; num4 <= 57; num4++)
				{
					_putchar(num1);
					_putchar(num2);
					_putchar(':');
					_putchar(num3);
					_putchar(num4);
					_putchar(10);
				}
			}
		}
	}
}
