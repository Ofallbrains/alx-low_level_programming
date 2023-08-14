#include "main.h"
/**
 * jack_bauer - prints time
 * Description: print time in minutes
 */
void jack_bauer(void)
{
int A, B;
for (A = 0; A < 24; A++)
{
for (B = 0; B < 60; B++)
{
_putchar((A / 10) + '0');
_putchar((A % 10) + '0');
_putchar(':');
_putchar((B / 10) + '0');
_putchar((B % 10) + '0');
_putchar('\n');
}
}
}
