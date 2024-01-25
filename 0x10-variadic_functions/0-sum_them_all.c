#include "variadic_functions.h"
/**
 * sum_them_all - This function returns the sum of all its arguments
 * @n: number of aeguments
 * Return: interger
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int index;
	int sum = 0;

	va_list num;

	va_start(num, n);

	for (index = 0; index < n; index++)
	{
		sum = sum + va_arg(num, unsigned int);
	}
	va_end(num);
	return (sum);
}
