#include "hash_tables.h"
/**
 * key_index - returns index of key value in the array
 * @key: the key to be indexed
 * @size: size of the hash table
 * Return: index of key in hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (!size)
	{
		return (0);
	}
	return (hash_djb2(key) % size);
}
