#include "lists.h"
/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @head: first node in the linked list
 * @index: index of the node to return
 *
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *new = head;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index && new; i++)
	{
		if (new->next == NULL)
			return (NULL);
		new = new->next;
	}
	return (new);
}
