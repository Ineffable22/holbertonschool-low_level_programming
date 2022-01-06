#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Double pointer to struct.
 * @idx: Index position to insert node.
 * @n: Value of new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node = NULL;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	if (idx > 1 && *h != NULL)
		return (insert_dnodeint_at_index(&((*h)->next), idx - 1, n));

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}
	node->n = n;
	node->next = (*h)->next;
	(*h)->next = node;
	return (*h ? *h : NULL);
}
