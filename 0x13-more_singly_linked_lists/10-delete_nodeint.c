#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at specific index
 * @head: pointer to the first node
 * @index: index of node to be deleted
 *
 * Return: returns 1 on success and -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *Previous_Node;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);

	if (!index)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}
	node = *head;
	while (node)
	{
		if (i == index)
		{
			Previous_Node->next = node->next;
			free(node);
			return (1);
		}
		i++;
		Previous_Node = node;
		node = node->next;
	}
	return (-1);
}
