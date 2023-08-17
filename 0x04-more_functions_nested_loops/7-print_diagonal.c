#include "main.h"
/**
 * print_diagonal - draws diagonal line on a terminal
 * @n: inputs number
 */
void print_diagonal(int n)
{
int i, j;
for (i = 0; i < n; i++)
{
if (n > 1)
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
if (n <= 0)
{
_putchar('\n');
}
}
