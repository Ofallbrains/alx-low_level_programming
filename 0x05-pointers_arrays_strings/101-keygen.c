#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid passwords
 * Return: 0
 */
int main(void)
{
int pass[100];
int c, sum, n;
sum = 0;
srand(time(NULL));
for (c = 0; c < 100; c++)
{
pass[c] = rand() % 78;
sum += (pass[c] + '0');
putchar(pass[c] + '0');
if ((2772 - sum)-'0' < 78)
{
n = 2772 - sum - '0';
sum += n;
putchar(n + '0');
break;
}
}
return (0);
}
