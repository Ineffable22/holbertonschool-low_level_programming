#include "hash_tables.h"
/**
 * hash_table_create - Creates a hash table.
 * @size: Is the size of the array
 * Return: A pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash = NULL;
	unsigned long int i = 0;

	hash = malloc(sizeof(hash_table_t));
	if (hash == NULL)
		return (NULL);
	hash->size = size;
	hash->array = malloc(sizeof(hash_table_t *) * size);
	if (hash->array == NULL)
	{
		free(hash);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		hash->array[i] = NULL;
	return (hash);
}
