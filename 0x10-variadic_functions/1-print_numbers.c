#include "variadic_functions.h"
/**
 * print_numbers - This function prints numbers followed by
 * a new line
 * @seperator: seperator
 * @n: number of argument
 * Return: void
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	unsigned int index;
	va_list num;

	va_start(num, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(num, unsigned int));

		if (index != n && seperator != NULL)
			printf("%s", seperator);
	}
	va_end(num);
	printf("\n");
}
