#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void reset_to_98(int *n)
{
int n;
int *p = &n;
n = 402;
printf("n=%p\n", n);
*p = 98;
printf("n=%p\n", n);
return (0);
}
