#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array - a function creates an array of chars,
 * and initializes it with a specific char
 * @size: size of array
 * @c: assigned char
 * Return: pointer to an array, null if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(c) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
