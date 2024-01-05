#include "main.h"
/**
 * cap_string - capitalizes strings
 * @str: parameter
 * Return: char
 */
char *cap_string(char *str)
{
	int index;
	int new_cap = 1;

	for (index = 0; str[index] != '\0'; index++)
	{
		if (str[index] == ' ' || str[index] == '.' || str[index] == '\t'
				|| str[index] == '\n' || str[index] == ',' || str[index] == ';'
				|| str[index] == '!' || str[index] == '?' || str[index] == '('
				|| str[index] == ')' || str[index] == '"' || str[index] == '{'
				|| str[index] == '}')
		{
			new_cap = 1;
		}
		else if (new_cap == 1 && str[index] >= 'a' && str[index] <= 'z')
		{
			str[index] = str[index] - 32;
			new_cap = 0;
		}
		else if(new_cap == 0 && str[index] >= 'A' && str[index] <= 'Z')
		{
			str[index] = str[index] + 32;
		}
		else
		{
			new_cap = 0;
		}
	}
		
	return (str);
}
