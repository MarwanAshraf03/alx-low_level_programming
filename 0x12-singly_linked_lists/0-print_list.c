#include "lists.h"
/**
 * strlength - counts string characters
 * @str: string to be counted
 *
 * Return: length of the string
 */
int strlength(char *str)
{
	int i = 0;

	if (!str)
		return (0);
	while (*str++)
		i++;
	return (i);
}

/**
 * print_list - prints linked list
 * @h: pointer to head of the list
 *
 * Return: length list
 */
size_t print_list(const list_t *h)
{
	size_t size = 0;

	while (h)
	{
		printf("[%d] %s\n", strlength(h->str), h->str ? h->str : "(nil)");
		size++;
		h = h->next;
	}
	return (size);
}
