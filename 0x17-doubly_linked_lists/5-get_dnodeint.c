#include "lists.h"

/**
 * get_dnodeint_at_index - gets node at given index
 * @head: head of the list
 * @index: index of the node
 * Return: address of the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *node;

	if (!head)
		return (NULL);
	node = head;
	for (i = 0; i < index; i++)
		node = node->next;
	if (i == index)
		return (node);
	else
		return (NULL);
}
