#include "hash_tables.h"

/**
 * shash_table_create - Creates a hash table.
 * @size: Is the size of the array
 * Return: A pointer to the newly created hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *hash = NULL;
	unsigned long int i = 0;

	hash = malloc(sizeof(hash_table_t));
	if (hash == NULL)
		return (NULL);
	hash->size = size;
	hash->array = malloc(sizeof(shash_table_t *) * size);
	if (hash->array == NULL)
	{
		free(hash);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		hash->array[i] = NULL;
	return (hash);
}

/**
 * shash_table_set - Adds an element to the hash table
 * @ht: Is the hash table you want to add or update the key/value to
 * @key: is the key
 * @value: Is the value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *node = NULL, **ptr = NULL;
	unsigned long int index = 0;

	if (!ht || !key || !strcmp(key, "") || !value)
		return (0);
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		return (0);
	}
	index = key_index((unsigned char *)key, ht->size);
	ptr = &(ht->array[index]);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;
	sset_check(ptr, &node);

	return (1);
}

/**
 * sset_check - set and check nodes
 * @head: pointing to hash_node in the hash table
 * @node: node to add in the index of the hash table
 *
 * Return: Nothing
 */
void sset_check(shash_node_t **head, shash_node_t **node)
{
	shash_node_t *tail = *head;

	if (!head)
	{
		free((*node)->key);
		free((*node)->value);
		free(*node);
		return;
	}
	if (*head)
	{
		while (tail)
		{
			if (strcmp(tail->key, (*node)->key) == 0)
			{
				free(tail->value);
				tail->value = strdup((*node)->value);
				free((*node)->value);
				free((*node)->key);
				free(*node);
				return;
			}
			tail = tail->next;
		}
	}

	(*node)->next = *head;
	*head = *node;
}

/**
 * shash_table_get - Retrieves a value associated with a key
 * @ht: Is the hash table you want to look into
 * @key: Is the key you are looking for
 *
 * Return: The value associated with the element,
 * or NULL if key couldn’t be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
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

/**
 * shash_table_print - Prints a hash table.
 * @ht: Is the hash table
 *
 * Return: Nothing
 */
void shash_table_print(const shash_table_t *ht)
{
	unsigned long int i = 0;
	shash_node_t *ptr = NULL;
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

/**
 * shash_table_print_rev - Prints a hash table in reverse.
 * @ht: Is the hash table
 *
 * Return: Nothing
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	unsigned long int i = 0;
	shash_node_t *ptr = NULL;
	char flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = ht->size; i > 0; i--)
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

/**
 * shash_table_delete - Deletes a hash table.
 * @ht: Is the hash table
 *
 * Return: Nothing.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *ptr = NULL;
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
