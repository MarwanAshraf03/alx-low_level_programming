#include "lists.h"

/**
 * sum_dlistint - returns sum of elements in a list
 * @head: head of the list
 * Return: returns sum of the list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
