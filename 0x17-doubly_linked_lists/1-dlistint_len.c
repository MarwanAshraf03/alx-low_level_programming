#include "lists.h"

/**
 * dlistint_len - function returns number of elements in a doubly linked list.
 * @h: head of the list
 * Return: returns length of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (!h)
		return (0);
	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
