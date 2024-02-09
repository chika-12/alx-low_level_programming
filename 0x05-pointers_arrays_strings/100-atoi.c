#include "main.h"
/**
 * _atoi - converts string to integer
 * @s: parameter
 * Return: 0
 */
int _atoi(char *s)
{
	int result;
	int sign;
	int index;

	result = 0;
	sign = 1;
	index = 0;

	if (s[0] == '-')
	{
		sign = -1;
		index++;
	}
	for (; s[index] != '\0'; index++)
	{
		if (s[index] >= 0 && s[index] <= 9)
		{
			result = result * 10 + s[index] - '0';
		}
		else
		{
			break;
		}
	}
	return (result * sign);
}
