#include "main.h"
/**
 * print_most_numbers - prints numbers 0 - 14 *10
 */
void print_most_numbers(void)
{
int i, j;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 14; j++)
{
if (j >= 10)
{
_putchar((j / 10) + '0');
}
_putchar((j % 10) + '0');
}
}
_putchar('\n');
}
