#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: string to be reversed
 * Return: 0
 */
void print_rev(char *s)
{
int c;
c = 0;
while (s[c] != '\0')
{
c++;
}
for (c--; c >= 0; c--)
{
_putchar(s[c]);
}
_putchar('\n');
}
