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
	hash_node_t *carry = NULL;

	if (ht == NULL || key == NULL || !strcmp(key, ""))
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	carry = ht->array[index];
	while (carry)
	{
		if (strcmp(carry->key, (char *)key) == 0)
			return (carry->value);
		carry = carry->next;
	}
	return (NULL);
}
