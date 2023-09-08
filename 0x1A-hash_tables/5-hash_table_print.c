#include "hash_tables.h"
/**
 * hash_table_print - pritns a hash table
 * @ht: hash table pointer
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *h_node;
	unsigned long int iter;
	int c;

	c = 0;
	if (!ht)
		return;
	putchar('{');
	for (iter = 0; iter < ht->size; iter++)
	{
		if (iter == (ht->size - 1))
			c = 0;
		if (c > 0)
			printf(", ");
		if (!ht->array[iter])
		{
			c = 0;
			continue;
		}
		if (ht->array[iter]->next)
		{
			c = 1;
			h_node = ht->array[iter];
			putchar('{');
			while (h_node)
			{
				if (c > 0)
					printf(", ");
				printf("'%s': '%s'", h_node->key, h_node->value);
				h_node = h_node->next;
				c++;
			}
			putchar('}');
			c = 0;
			break;
		}
		c = 1;
		printf("'%s': '%s'", ht->array[iter]->key, ht->array[iter]->value);
	}
	printf("}\n");
}

