#include "lists.h"

/**
 * pop_listint - deletes the first node of a list
 * @head: first node in the list
 *
 * Return: returns the value in the head node
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int i;

	if (!head || !*head)
		return (0);
	node = (*head)->next;
	i = (*head)->n;
	free(*head);
	*head = node;
	return (i);
}
