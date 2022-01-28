#include "hash_tables.h"
/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: Is the hash table you want to look into
 * @key: Is the key you are looking for
 *
 * Return: The value associated with the element,
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int index = 0;

	if (key == NULL)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	while (ht->array[index])
	{
		if (strcmp(ht->array[index]->key, key) == 0)
			return (ht->array[index]->value);
		ht->array[index] = ht->array[index]->next;
	}
	return (NULL);
}
