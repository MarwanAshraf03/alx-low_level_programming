#include "lists.h"

/**
 * add_nodeint - adds node at the beginnig of the list
 * @head: pointer to head
 * @n: the value of integer to be in the new node
 *
 * Return: returns address to the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (!new || !head)
		return (NULL);
	if (n)
	{
		new->n = n;
		if (!n)
		{
			free(new);
			return (NULL);
		}
	}
	new->next = *head;
	*head = new;
	return (new);
}
