#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strpbrk- searches a string for any set of bytes
 * @s: parameter
 * @accept: parameter
 *
 * Return: pointer to s
 */
char *_strpbrk(char *s, char *accept)
{
        char *result;

        result = strpbrk(s, accept);
        return (result);
}
