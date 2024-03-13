#include "hash_tables.h"
/**
 * hash_table_delete - deletes hash table
 * @ht: hash table
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *h_node, *temp;
	unsigned long int iter;

	if (!ht)
		return;
	for (iter = 0; iter < ht->size; iter++)
	{
		h_node = ht->array[iter];
		while (h_node)
		{
			temp = h_node;
			h_node = h_node->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
