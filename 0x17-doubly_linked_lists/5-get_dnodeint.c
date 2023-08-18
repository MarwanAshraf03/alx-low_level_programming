#include "lists.h"

/**
 * get_dnodeint_at_index - gets node at given index
 * @head: head of the list
 * @index: index of the node
 * Return: address of the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
