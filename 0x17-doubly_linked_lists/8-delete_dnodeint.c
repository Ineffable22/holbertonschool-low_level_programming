#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes node of a dlistint_t linked list.
 * @head: Double pointer to struct.
 * @index: Index position to remove node.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = NULL;

	if (*head == NULL)
		return (-1);
	if (index > 0 && *head != NULL)
		return (delete_dnodeint_at_index(&((*head)->next), index - 1));
	tmp = *head;
	if (index == 0)
	{
		if (tmp->next)
			tmp->next->prev = NULL;
		(*head) = (*head)->next;
		free(tmp);
		return (1);
	}
	return (1);
}
