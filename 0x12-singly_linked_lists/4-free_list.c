#include "lists.h"
/**
 * free_list - frees a list_t list
 * @head: Pointer to struct
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
