#include "lists.h"
/**
 * add_dnodeint_end - function adds a new node at the end of the list.
 * @head: head of the list
 * @n: value of the new node
 * Return: address of the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t)), *new_head;

	if (!head)
		return (NULL);
	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (!*head)
	{
		(*head) = new_node;
		new_node->prev = NULL;
	}
	else
	{
		new_head = *head;
		while (new_head->next)
			new_head = new_head->next;
		new_head->next = new_node;
		new_node->prev = new_head;
	}
	return (new_node);
}
