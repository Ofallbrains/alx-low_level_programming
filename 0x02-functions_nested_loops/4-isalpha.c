#include "main.h"
/**
 * _isalpha - checks alphabetic character
 * Description: using _putchar
 * @c: collects the character
 * Return: 1 if c is a letter (lowercase or uppercase) otherwise 0
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
