#include "main.h"
/**
 * cap_string - capitalizes strings
 * @str: parameter
 * Return: char
 */
char *cap_string(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		if (str[index] == '\t')
		{
			str[index] = ' ';
		}
		if (str[index] == ' ' || str[index] == '.' || str[index] == '\t'
				|| str[index] == '\n' || str[index] == ',' || str[index] == ';'
				|| str[index] == '!' || str[index] == '?' || str[index] == '('
				|| str[index] == ')' || str[index] == '"' || str[index] == '{'
				|| str[index] == '}')
		{
			index++;
			if (str[index] == ' ' || str[index] == '\n')
			{
				index++;
			}
			if (str[index] >= 'a' && str[index] <= 'z')
			{
				str[index] = str[index] - 32;
			}
		}
	}
	return (str);
}

