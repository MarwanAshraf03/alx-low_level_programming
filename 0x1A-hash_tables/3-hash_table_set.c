#include "hash_tables.h"
/**
 * instantiate_node - returns node
 * @key: key of node
 * @value: value of node
 * Return: pointer to the new node
*/
hash_node_t *instantiate_node(const char *key, const char *value)
{
	hash_node_t *h_node;

	h_node = (hash_node_t *) malloc(sizeof(hash_node_t));
	if (!h_node)
		return (0);
	h_node->key = strdup(key);
	h_node->value = strdup(value);
	if (!h_node->key || !h_node->value)
	{
		free(h_node);
		free(h_node->key);
		free(h_node->value);
		return (NULL);
	}
	return (h_node);
}
/**
 * hash_table_set - adds element to hash table
 * @ht: hash table
 * @key: key of value
 * @value: value to be added
 * Return: returns 1 on success 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *head, *ret;
	unsigned long int idx;

	if (!ht || !*key || !key || !value)
		return (0);
	idx = key_index((unsigned const char *)key, ht->size);
	if (!ht->array[idx])
	{
		ret = instantiate_node(key, value);
		if (!ret)
			return (0);
		ht->array[idx] = ret;
		return (1);
	}
	head = ht->array[idx];
	while (head)
	{
		if (!strcmp(head->key, key))
		{
			free(head->value);
			head->value = strdup(value);
			if (!head->value)
				return (0);
			return (1);
		}
		head = head->next;
	}
	ret = instantiate_node(key, value);
	if (!ret)
		return (0);
	ret->next = ht->array[idx];
	ht->array[idx] = ret;
	return (1);
}
