#include "lists.h"
/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: pointer to the first element in the linked list
 *
 * Return: a pointer to the first node of the reversed list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	long int diff;

	if (head == NULL)
		return (0);
	while (head)
	{
		diff = head - head->next;
		num++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (diff > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (num);
}
