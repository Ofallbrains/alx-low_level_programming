#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: input
 * Retrun: 0
 */
void puts_half(char *str)
{
int len = 0;
int half, c;
while (str[len] != '\0')
{
len++;
}
half = (len - 1) / 2;
for (c = (half + 1); c < len; c++)
{
_putchar(str[c]);
}
_putchar('\n');
}
