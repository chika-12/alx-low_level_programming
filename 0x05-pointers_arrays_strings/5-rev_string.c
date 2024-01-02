#include "main.h"
/**
 * rev_string - reverses a string
 * @s: parameter
 * Return: void
 */
void rev_string(char *s)
{
	int len;
	int start;
	char temp;
	int end;
	int index;

	len = 0;
	for (index = 0; s[index] != '\0'; index++)
	{
		len += 1;
	}
	start = 0;
	end = len - 1;

	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}
