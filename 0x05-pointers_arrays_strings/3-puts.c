#include "main.h"
/**
 * _puts - prints a string followed by a new line
 * to stdout
 * @str: prints string
 */
void _puts(char *str)
{
int c;
for (c = 0; str[c] != '\0'; c++)
{
_putchar(str[c]);
}
_putchar('\n');
}
