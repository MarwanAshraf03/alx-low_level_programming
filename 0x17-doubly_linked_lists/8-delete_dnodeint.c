#include "lists.h"

/**
 * delete_dnodeint_at_index  - deletes node at index
 * @head: head of the list
 * @index: index of node to be deleted
 * Return: 1 if succeeded, -1 failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *iterator;

	if (!head || !*head)
		return (-1);
	iterator = *head;
	if (index == 0)
	{
		(*head) = iterator->next;
		if (*head)
			(*head)->prev = NULL;
		free(iterator);
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		if (!iterator->next)
			return (-1);
		iterator = iterator->next;
	}
	if (iterator->next)
	{
		iterator->prev->next = iterator->next;
		iterator->next->prev = iterator->prev;
	}
	else
		iterator->prev->next = NULL;
	free(iterator);
	return (1);
}

