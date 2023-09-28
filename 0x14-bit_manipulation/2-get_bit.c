#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index.
 * @n: decimal number
 * @index: index of the bit
 * Return: the bit found
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);

	n >>= index;
	return (n & 1);
}
