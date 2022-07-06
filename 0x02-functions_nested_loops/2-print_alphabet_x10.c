#include "main.h"
/**
 * print_alphabet_x10 -> prints the lowercase alphabets
 */
void print_alphabet_x10(void)
{
int j;
int X;
for (X = 0; X < 10; X++)
{
for (j = 'a'; j <= 'z'; j++)
{
_putchar (j);
}
_putchar ('\n');
}
}
