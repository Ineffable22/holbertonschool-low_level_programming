#include "lists.h"

/**
 * dlistint_len - Computes the elements of a dlistint_t list.
 * @h: Pointer to struct.
 *
 * Return: The number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	if (h)
		return (1 + dlistint_len(h->next));
	return (0);
}
