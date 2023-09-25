#include "lists.h"
/**
 * free_listint2 - a function that frees a linked lists
 * function that sets head to null
 * @head: linked list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
		return;

	while (*head)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
	}

	*head = NULL;
}
