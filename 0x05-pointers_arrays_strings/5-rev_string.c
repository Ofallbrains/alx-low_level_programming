#include "main.h"
/**
 * rev_string - reverse a string
 * @s: inputs a string
 * Return: 0
 */
void rev_string(char *s)
{
int length, c;
char temp;
length = 0;
while (s[length] != '\0')
{
length++;
}
for (c = 0; c < length / 2; c++)
{
temp = s[c];
s[c] = s[length - c - 1];
s[length - c - 1] = temp;
}
}
