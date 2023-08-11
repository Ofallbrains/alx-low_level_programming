#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (success)
 */
int main(void)
{
int a, b;
for (a = '0'; a < '9'; a++)
{
for (b = a + 1; b <= '9'; b++)
{
if (b != a)
{
if (a == '8' && b == '9')
continue;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
