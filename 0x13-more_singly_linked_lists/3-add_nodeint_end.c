#include "lists.h"

/**
 * add_nodeint_end - adds node to the end of the list
 * @head: pointer to the head of the list
 * @n: integer to be in the new node
 *
 * Return: returns address to the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *last_element = *head;

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
	if (last_element)
	{
		while (last_element->next)
			last_element = last_element->next;
		last_element->next = new;
	}
	else
		*head = new;
	return (new);
}
