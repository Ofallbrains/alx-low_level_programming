#include <string.h>
#include "main.h"
/**
 * _strncpy - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: no of bytes from src
 * Return: pointer to source string
 */
char *_strncpy(char *dest, char *src, int n)
{
strncpy(dest, src, n);

return (dest);
}
