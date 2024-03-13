#include "lists.h"

/**
 * sum_listint - sums the values of the list
 * @head: first node of the list
 *
 * Return: returns sum of values of the list
 */
int sum_listint(listint_t *head)
{
	listint_t *node;
	int sum = 0;

	if (!head)
		return (0);
	node = head;
	while (node)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}

