#include "main.h"
/**
 * _islower - checks lowercaase character
 * Description: use _putchar
 * @c: collect alphabets
 * Return: 1 if c is lowercase and otherwise 0
 */
int _islower(int c)
{
char i;
int lower = 0;
for (i = 'a'; i <= 'z'; i++)
{
	if (i == c)
	{
		lower = 1;
	}
}
return (lower);
}
