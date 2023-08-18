#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node in list at specified index
 * @h: head of the list
 * @idx: index of new node
 * @n: value of the new node
 * Return: address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *iterator;

	if (!h)
		return (NULL);
	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}
	iterator = *h;
	new_node->n = n;
	if (!*h && idx == 0)
	{
		new_node->next = NULL;
		new_node->prev = NULL;
		return (*h = new_node);
	}
	while (iterator)
	{
		if (i == idx - 1)
		{
			new_node->next = iterator->next;
			new_node->prev = iterator;
			iterator->next->prev = new_node;
			iterator->next = new_node;
			return (new_node);
		}
		iterator = iterator->next;
		i++;
	}
	return (free(new_node), NULL);
}
