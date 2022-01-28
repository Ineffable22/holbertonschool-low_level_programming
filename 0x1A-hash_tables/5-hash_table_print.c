#include "hash_tables.h"
/**
 * hash_table_print - Prints a hash table.
 * @ht: Is the hash table
 *
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *ptr = NULL;
	char flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		ptr = ht->array[i];
		while (ptr != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", ptr->key, ptr->value);
			flag = 1;
			ptr = ptr->next;
		}
	}
	printf("}\n");
}
