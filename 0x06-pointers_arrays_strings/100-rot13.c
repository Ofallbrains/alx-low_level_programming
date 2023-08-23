#include "main.h"
/**
 * rot13 - encode a string using rot13
 * @str: input value
 * Return: void
 */
char *rot13(char *str)
{
int i, j;
char c[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char d[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; c[j] != '\0'; j++)
{
if (str[i] == c[j])
{
str[i] = d[j];
break;
}
}
}
return (str);
}
