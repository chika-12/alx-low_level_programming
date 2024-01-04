#include "main.h"
/**
 * string_toupper - prints latters in uppercase
 *
 * @str: parameter
 * Return: char
 */
char *string_toupper(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			str[index] = (str[index] - 32);
		}
	}
	return (str);
}
