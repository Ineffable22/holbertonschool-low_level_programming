#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: Double pointer to struct.
 * @n: data to insert in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = NULL;

	if (head == NULL)
		return (NULL);
	node = malloc(sizeof(dlistint_t));
	if (!node)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}
	node->n = n;
	node->next = *head;
	node->prev = NULL;

	if (*head)
		(*head)->prev = node;

	*head = node;
	return (node);
}
