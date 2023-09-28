#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - length of a string
 * @s: pointer to the string
 * Return: void
*/

int _strlen(const char *s)
{
int j = 0;
while (s[j])
	j++;

return (j);
}


/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number
 * Return: 0 or converted number
 */

unsigned int binary_to_uint(const char *b)
{
	size_t i = 0;
	int j, len;

	if (b == NULL)
		return (0);

	len = _strlen(b);

	for (j = 0; j != len; j++)
	{
		if (b[len - j - 1] == '1')
			i += 1 << j;
		else if (b[len - j - 1] != '0')
			return (0);
	}

	return (i);
}
