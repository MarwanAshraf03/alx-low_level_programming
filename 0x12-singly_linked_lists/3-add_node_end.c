#include "lists.h"

/**
 * add_node_end - adds node to the end of the list
 * @head: pointer to the head of the list
 * @str: string to be added
 *
 * Return: returns address to the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	list_t *last_element = *head;

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
