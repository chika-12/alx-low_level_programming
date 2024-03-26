#include "main.h"

int add(int a, int b)
{

    return (a + b);
}

int sub(int a, int b)
{

    return (a - b);
}

int mul(int a, int b)
{

    return (a * b);
}

int my_div(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
int mod(int a, int b)
{
	return (a % b);
}
