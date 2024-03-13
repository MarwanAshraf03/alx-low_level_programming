#include "lists.h"

/**
 * list_len - returns number of elements in list
 * @h: pointer to the head of the list
 *
 * Return: number of elements in list
 */
size_t list_len(const list_t *h)
{
	size_t size = 0;

	if (!h)
		return (0);
	while (h)
	{
		size++;
		h = h->next;
	}
	return (size);
}

