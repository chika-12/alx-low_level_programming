#include "main.h"
/**
 * is_prime_number - checks for prime numbers
 * @n: parameter
 * @num: parameter
 * Return: integer
 */
int prime_calc(int n, int num);
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	else
	{
		return (prime_calc(n, 2));
	}
}
/**
 * prime_calc - calculates the prime numbers
 * @n: parameter
 * @num: parameter
 * Return: integer
 */
int prime_calc(int n, int num)
{
	if (n % num == 0)
	{
		if (n == num)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	else
	{
		return (prime_calc(n, num + 1));
	}
}
