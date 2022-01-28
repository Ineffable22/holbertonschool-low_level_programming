#include "hash_tables.h"
/**
 * hash_table_delete - Deletes a hash table.
 * @ht: Is the hash table
 *
 * Return: Nothing.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *ptr = NULL;
	unsigned long int i = 0;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i] != NULL)
		{
			ptr = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = ptr;
		}
	}
	free(ht->array);
	free(ht);
}
