#include "main.h"
/**
 * _strstr -  locates a substring
 * @haystack: input string
 * @needle: input substring
 * Return: NULL
 */
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *b = haystack;
char *c = needle;
while (*b == *c && *c != '\0')
{
b++;
c++;
}

if (*c == '\0')
return (haystack);
}
return (0);
}
