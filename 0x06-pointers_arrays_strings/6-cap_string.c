#include "main.h"
/**
 * cap_string - capitalizes strings
 * @str: parameter
 * Return: char
 */
char *cap_string(char *str)
{
	int index;
	int new_cap;

	for (index = 0; str[index] != '\0'; index++)
	{
		new_cap = 0;
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
			new_cap = 1;
		}
		else if (str[index] >= 'A' && str[index] <= 'Z'
				&& new_cap != 1 && str[index] != str[0])
		{
			str[index] = str[index] + 32;
		}
	}
	return (str);
}
