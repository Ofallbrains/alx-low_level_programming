#include "main.h"
/**
 * print_line - draws straight line in a terminal
 * @n: inputs integer
 */
void print_line(int n)
{
int i;
for (i = 0; i < n; i++)
{
if (n > 0)
{
_putchar('_');
}
}
_putchar('\n');
}
