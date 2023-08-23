#include "main.h"
/**
 * reverse_array - reverses thecontent of an array
 * @a: an array of integers
 * @n: no of elements in an array
 * Return: 0
 */
void reverse_array(int *a, int n)
{
int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
