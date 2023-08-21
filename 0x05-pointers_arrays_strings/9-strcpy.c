#include "main.h"
/**
 * *_strcpy - function that copies string to pointer
 * @dest: string 1 pointer to char
 * @src: string 2 pointer to char
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
int c;
for (c = 0; src[c] != '\0'; c++)
{
dest[c] = src[c];
}
dest[c] = '\0';
return (dest);
}
