#include "lists.h"

/**
 * free_dlistint - frees a list
 * @head: head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	temp = head;
	while (temp)
	{
		free(head);
		temp = temp->next;
		head = temp;
	}
	free(head);
}
