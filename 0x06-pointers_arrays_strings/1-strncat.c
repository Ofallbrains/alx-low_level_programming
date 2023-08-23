#include <string.h>
#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: no of bytes from src
 * Return: pointer to source string
 */
char *_strncat(char *dest, char *src, int n)
{
strncat(dest, src, n);

return (dest);
}
