#include "main.h"
#include <string.h>

/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 * @s: input string
 * @accept: input string
 * Return: returns a pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
char *c;
c = strpbrk(s, accept);
return (c);
}
