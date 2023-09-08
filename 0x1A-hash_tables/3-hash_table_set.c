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
	hash_node_t *ht_node;
	unsigned long int index;

	if (!ht || !value || !key || !*key)
		return (0);
	ht_node = (hash_node_t *) malloc(sizeof(hash_node_t));
	if (!ht_node)
		return (0);
	strcpy(ht_node->key, key);
	strcpy(ht_node->value, value);
	ht_node->next = NULL;
	index = key_index(key, ht->size);
	if (!ht->array[index])
	{
		ht->array[index] = ht_node;
		return (1);
	}
	else
	{
		ht_node->next = ht->array[index];
		return (1);
	}
}
