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

	hash = malloc(sizeof(shash_table_t));
	if (hash == NULL)
		return (NULL);
	hash->size = size;
	hash->array = malloc(sizeof(shash_node_t *) * size);
	if (hash->array == NULL)
	{
		free(hash);
		return (NULL);
	}
	hash->shead = NULL;
	hash->stail = NULL;
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
	shash_node_t *hash_node = NULL;
	shash_node_t *new_node = NULL;
	char *new_key = NULL;
	char *new_value = NULL;
	unsigned long int hash_idx;

	if (!key || !ht || !value)
		return (0);
	hash_idx = key_index((const unsigned char *)key, ht->size);
	hash_node = ht->array[hash_idx];
	new_value = strdup(value);
	while (hash_node)
	{
		if (strcmp(hash_node->key, key) == 0)
		{
			free(hash_node->value);
			hash_node->value = new_value;
			return (1);
		}
		hash_node = hash_node->next;
	}
	new_key = strdup(key);
	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->value = new_value;
	new_node->key = new_key;
	new_node->next = ht->array[hash_idx];
	ht->array[hash_idx] = new_node;
	new_node->sprev = NULL;
	new_node->snext = NULL;
	sort_check(ht, new_node);
	return (1);
}

/**
 * sort_check - Adds an element to the hash table
 * @ht: Is the hash table you want to add or update the key/value to
 * @node: node to vincule
 *
 * Return: Nothing
 */
void sort_check(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *current = NULL, *tmp = NULL;

	if (!(ht->shead) || strcmp(node->key, ht->shead->key) <= 0)
	{
		node->snext = ht->shead;
		if (ht->shead)
			ht->shead->sprev = node;
		if (!(ht->stail))
			ht->stail = node;
		ht->shead = node;
		return;
	}

	current = ht->shead;
	tmp = ht->shead->snext;
	while ((tmp) && strcmp(node->key, tmp->key) > 0)
	{
		current = current->snext;
		tmp = tmp->snext;
	}
	current->snext = node;
	node->snext = tmp;
	node->sprev = current;
	if (tmp)
		tmp->sprev = node;
	else
		ht->stail = node;
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
	shash_node_t *tmp = NULL;

	if (!ht || key == NULL)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
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
	shash_node_t *ptr = NULL;
	char flag = 0;

	if (!ht || !(ht->array))
		return;

	ptr = ht->shead;
	printf("{");
	while (ptr)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", ptr->key, ptr->value);
		ptr = ptr->snext;
		flag = 1;
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
	shash_node_t *ptr = NULL;
	char flag = 0;

	if (!ht || !(ht->array))
		return;

	ptr = ht->stail;
	printf("{");
	while (ptr)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", ptr->key, ptr->value);
		ptr = ptr->sprev;
		flag = 1;
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
