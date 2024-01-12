#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: parameter
 * @needle: parameter
 *
 * Return: returns a substring
 */
char *_strstr(char *haystack, char *needle)
{
        char *result;

        result = strstr(haystack, needle);
        return (result);
}
