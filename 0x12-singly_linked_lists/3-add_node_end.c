#include "lists.h"
/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Pointer to struct
 * @str: Pointer to string
 *
 * Return: The address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *tmp = *head;
	size_t len = 0;

	for (len = 0; *(str + len); len++)
	{}

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);

	ptr->str = strdup(str);
	ptr->len = len;
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}

	while (tmp->next)
		tmp = tmp->next;
	tmp->next = ptr;

	return (ptr);
}
