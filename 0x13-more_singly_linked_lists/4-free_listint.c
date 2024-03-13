#include "lists.h"

/**
 * free_listint - frees a list
 * @head: pointer to the head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *node, *next_node;

	if (!head)
		return;
	node = head;
	while (node)
	{
		next_node = node->next;
		free(node);
		node = next_node;
	}
}
