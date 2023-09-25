#include "lists.h"
/**
 * pop_listint - a function that deletes head node of a linked list
 * @head: linked list
 * Return: head node's data(n)
 */
int pop_listint(listint_t **head)
{
	int value = 0;
	listint_t *newNode = NULL;

	if (!*head)
		return (0);

	newNode = (*head)->next;
	value = (*head)->n;
	free(*head);
	(*head) = newNode;

	return (value);
}
