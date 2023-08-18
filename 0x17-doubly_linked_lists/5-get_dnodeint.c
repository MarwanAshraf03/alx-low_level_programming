#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    unsigned int i;
    dlistint_t *node;

    if (!head)
        return NULL;
    if (index > dlistint_len(head))
        return NULL;
    node = head;
    for (i = 0; i < index; i++)
    {
        node = node->next;
    }
    return node;
}