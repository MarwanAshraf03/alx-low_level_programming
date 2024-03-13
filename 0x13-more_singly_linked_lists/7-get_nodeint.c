#include "lists.h"

/**
 * get_nodeint_at_index - gets node at specific index
 * @head: pointer to the first node
 * @index: index to be got
 *
 * Return: pointer to the node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int i;

	node = head;
	for (node = head, i = 0; i < index && node; i++)
		node = node->next;
	return (node);
}

