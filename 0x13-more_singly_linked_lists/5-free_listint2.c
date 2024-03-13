#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: pointer to pointer to first node
 */
void free_listint2(listint_t **head)
{
	listint_t *node, *next_node;

	if (!head)
		return;
	next_node = *head;
	while (next_node)
	{
		node = next_node;
		next_node = next_node->next;
		free(node);
	}
	*head = NULL;
}

