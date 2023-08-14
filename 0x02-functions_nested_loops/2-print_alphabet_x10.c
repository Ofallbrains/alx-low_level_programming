#include "main.h"
/**
 * print_alphabet_x10 - Prints alphabet *10
 *
 */
void print_alphabet_x10(void)
{
char c;
int b;
for (b = 0; b < 10; b++)
{
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
_putchar('\n');
}
}
