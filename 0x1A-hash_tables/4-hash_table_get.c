#include "hash_tables.h"
/**
 * hash_table_get - gets value associated with key
 * @ht: hash table
 * @key: key of value
 * Return: value paired with key
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *ht_node;

	if (!ht || !key || !*key)
		return (NULL);
	ht_node = (hash_node_t *) malloc(sizeof(hash_node_t));
	if (!ht_node)
		return (NULL);
	index = key_index((unsigned const char *)key, ht->size);
	ht_node = ht->array[index];
	if (!ht_node)
		return (NULL);
	if (!ht_node->next)
	{
		if (!strcmp(ht_node->key, key))
			return (ht_node->value);
		else
			return (NULL);
	}
	else
		while (ht_node)
		{
			if (!strcmp(ht_node->key, key))
			{
				return (ht_node->value);
			}
			ht_node = ht_node->next;
		}
	return (NULL);
}
