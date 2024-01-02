#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int a;
    int b;
    int *x;
    int *n;

    a = 98;
    b = 42;
    x = &a;
    n = &b;

    printf("a=%d, b=%d\n", a, b);
    swap_int(x, n);
    printf("a=%d, b=%d\n", a, b);
    return (0);
}
