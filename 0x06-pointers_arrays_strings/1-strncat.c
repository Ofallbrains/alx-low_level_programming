#include "main.h"
/**
 * _strncat -  concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: no of element from src
 * Return: destination + no of src
 */
char *_strncat(char *dest, char *src, int n)
{
int len, i;
for (len = 0; dest[len] != '\0'; len++)
{

}
for (i = 0; i < n && src[i] != 0; i++)
{
dest[len + i] = src[i];
}
return (dest);
}
