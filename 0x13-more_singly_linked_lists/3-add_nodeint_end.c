#include "lists.h"
/**
 * add_nodeint_end - a function that adds a node
 * at the end of linked list
 * @head: head of list
 * @n: node
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *end;

	if (head == NULL)
		return (NULL);
	end = *head;
	if (end != NULL)
		while (end->next != NULL)
			end = end->next;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	if (*head == NULL)
	{
		*head = ptr;
		ptr->next = NULL;
	}
	else
	{
		end->next = ptr;
		ptr->next = NULL;
	}
	return (ptr);
}
