#include "main.h"
/**
 * leet - Encodes a string to 1337 code
 *
 * @str: parameter
 * Return: char
 */
char *leet(char *str)
{
	int index;
	int idx;
	char alph_low[5] = {'a', 'e', 'o', 't', 'l'};
	char alph_upp[5] = {'A', 'E', 'O', 'T', 'L'};
	int num[5] = {52, 51, 48, 55, 49};

	for (idx = 0; str[idx] != '\0'; idx++)
	{
		for (index = 0; index < 5; index++)
		{
			if (str[idx] == alph_low[index] || str[idx] == alph_upp[index])
			{
				str[idx] = num[index];
			}
		}
	}
	return (str);
}
