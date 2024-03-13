#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node at specific index
 * @head: pointer to the first node
 * @idx: index to be added in
 * @n: value to be put in the new node
 *
 * Return: address to the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *node2 = malloc(sizeof(listint_t));
	unsigned int i = 0;

	if (!head || !node2)
		return (NULL);

	node2->n = n;
	node2->next = NULL;
	if (!idx)
	{
		node2->next = *head;
		*head = node2;
		return (node2);
	}
	node = *head;
	while (node)
	{
		if (i == idx - 1)
		{
			node2->next = node->next;
			node->next = node2;
			return (node2);
		}
		i++;
		node = node->next;
	}
	free(node2);
	return (NULL);
}
