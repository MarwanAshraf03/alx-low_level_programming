#include "lists.h"

/**
 * @brief 
 * 
 * @param head 
 */
void free_dlistint(dlistint_t *head)
{
    dlistint_t *temp;

    temp = head;
    while (temp)
    {
        free(head);
        temp = temp->next;
        head = temp;
    }
    free(temp);
    free(head);
}