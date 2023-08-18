#include "lists.h"

/**
 * delete_dnodeint_at_index  - deletes node at index
 * @head: head of the list
 * @index: index of node to be deleted
 * Return: 1 if succeeded, -1 failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *iterator;

	if (!head)
		return (-1);
	iterator = *head;
	if (index == 0)
	{
		if (!iterator)
			return (-1);
		(*head) = iterator->next;
		if (*head)
			(*head)->prev = NULL;
		free(iterator);
		return (1);
	}
	while (iterator)
	{
		if (index == 0)
		{
			iterator->next->prev = iterator->prev;
			iterator->prev->next = NULL;
			if (iterator->next)
			iterator->prev->next = iterator->next;
			return (1);
		}
		iterator = iterator->next;
		index--;
	}
	return (-1);
}

