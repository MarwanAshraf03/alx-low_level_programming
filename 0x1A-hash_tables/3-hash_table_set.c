#include "hash_tables.h"
/**
 * hash_table_set - adds element to hash table
 * @ht: hash table
 * @key: key of value
 * @value: value to be added
 * Return: returns 1 on success 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *head, *ht_node;
	unsigned long int index;

	if (!ht || !value || !key || !*key)
		return (0);
	ht_node = (hash_node_t *) malloc(sizeof(hash_node_t));
	if (!ht_node)
		return (0);
	ht_node->key = strdup(key);
	if (!ht_node->key)
		return (0);
	ht_node->next = NULL;
	index = key_index((unsigned const char *)key, ht->size);
	head = ht->array[index];
	if (!head)
	{
		ht_node->value = strdup(value);
		if (!ht_node->value)
			return (0);
		ht->array[index] = ht_node;
		return (1);
	}
	printf("33\n");
	while (head)
	{
		if (!strcmp(key, head->key))
		{
			free(head->value);
			head->value = strdup(value);
			if (!head->value)
				return (0);
			return (1);
		}
		head = head->next;
	}
	ht_node->value = strdup(value);
	if (!ht_node->value)
		return (0);
	ht_node->next = ht->array[index];
	ht->array[index]->next = ht_node;
	return (1);
}
