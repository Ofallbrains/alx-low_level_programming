#include "lists.h"
/**
 * listint_len - a function that returns the number of elements
 * in a linked list
 * @h: head
 * Return: list length
 */
size_t listint_len(const listint_t *h)
{
	size_t length;

	if (h == NULL)
		return (0);
	for (length = 0; h != NULL; length++)
	{
		h = h->next;
	}
	return (length);
}
