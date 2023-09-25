#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - a function that frees linked list
 * @head: linked list
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while ((ptr = head) != NULL)
	{
		head = head->next;
		free(ptr);
	}
}
