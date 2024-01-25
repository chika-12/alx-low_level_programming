#include "variadic_functions.h"
/**
 * print_strings - This function prints a string
 * @seperator: A string that seperates the string
 * @n: number of arguments
 * Return: void
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	unsigned int index;
	va_list str;

	va_start(str, n);

	for (index = 0;  index < n; index++)
	{
		const char *new_char = va_arg(str, const char *);

		if (new_char == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", new_char);
		}
		if (index < n - 1 && seperator != NULL)
		{
			printf("%s", seperator);
		}
	}
	printf("\n");
}
