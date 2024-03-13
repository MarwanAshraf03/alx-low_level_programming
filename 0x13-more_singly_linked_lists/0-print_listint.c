#include "lists.h"
/**
 * print_listint - prints linked list
 * @h: pointer to head of the list
 *
 * Return: length list
 */
size_t print_listint(const listint_t *h)
{
	size_t size = 0;

	while (h)
	{
		printf("%d\n", h->n);
		size++;
		h = h->next;
	}
	return (size);
}
