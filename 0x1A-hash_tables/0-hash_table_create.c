#include "hash_tables.h"
/**
 * hash_table_create - creates hash table of @size
 * @size: size of the hash table
 * Return: returns pointer to the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *ht;

	if (!size)
		return (NULL);
	ht = (hash_table_t *) malloc(sizeof(hash_table_t));
	if (!ht)
		return (NULL);
	ht->size = size;
	ht->array = (hash_node_t **) calloc(ht->size, sizeof(hash_node_t *));
	if (!ht->array)
	{
		free(ht);
		return (NULL);
	}
	for (i = 0; i < ht->size; i++)
		ht->array[i] = NULL;
	return (ht);
}
