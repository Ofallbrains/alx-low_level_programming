#include <stdio.h>
/**
 * main - Prints combinations of two two digit
 * Return: 0 (success)
 */
int main(void)
{
int c, d;

for (c = 0; c < 99; c++)
{
	for (d = c + 1; d <= 99; d++)
	{
		putchar('0' + c / 10);
		putchar('0' + c % 10);

		putchar(' ');
		putchar('0' + d / 10);
		putchar('0' + d % 10);

		if (c == 98 && d == 99)
			break;
		putchar(',');
		putchar(' ');
	}
}
putchar('\n');
return (0);
}
