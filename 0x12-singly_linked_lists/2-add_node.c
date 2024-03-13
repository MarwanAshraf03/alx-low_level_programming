#include "lists.h"

/**
 * add_node - adds node at the beginnig of the list
 * @head: pointer to head
 * @str: string of the new node
 *
 * Return: returns address to the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (!new || !head)
		return (NULL);
	if (str)
	{
		new->str = strdup(str);
		if (!new->str)
		{
			free(new);
			return (NULL);
		}
		new->len = strlength(new->str);
	}
	new->next = *head;
	*head = new;
	return (new);
}

