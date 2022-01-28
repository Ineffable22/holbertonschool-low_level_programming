#include "hash_tables.h"
/**
 * hash_table_set - Adds an element to the hash table
 * @ht: Is the hash table you want to add or update the key/value to
 * @key: is the key
 * @value: Is the value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node = NULL;
	unsigned long int index = 0;

	if (key == NULL)
		return (0);
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		return (0);
	}
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] != NULL)
	{
		node->next = ht->array[index];
	}
	ht->array[index] = node;
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;

	return (1);
}
