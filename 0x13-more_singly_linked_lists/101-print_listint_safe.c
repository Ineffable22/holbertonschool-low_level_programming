#include "lists.h"

listint_t *find_start_loop(const listint_t *);

/**
 * print_listint_safe - function that prints a listint_t linked list
 *
 * @head: pointer to listint_t struct
 *
 * Return: nodes number
 */
size_t print_listint_safe(const listint_t *head)
{
	int count = 0, repeat = 0;
	listint_t *start_loop;

	if (head == NULL)
		return (0);

	start_loop = find_start_loop(head);
	while (head != NULL)
	{
		if (head == start_loop)
			repeat++;
		if (repeat > 1)
			break;
		count++;
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	if (start_loop != NULL)
		printf("-> [%p] %d\n", (void *)start_loop, start_loop->n);
	return (count);
}
/**
 * find_start_loop - function that finds the start of the loop
 * of the linked list
 *
 * @head: pointer to listint_t struct
 *
 * Return: node address where the loop starts
 */
listint_t *find_start_loop(const listint_t *head)
{
	listint_t *ptr_t = (void *)head, *ptr_h = (void *)head;

	while (ptr_h->next != NULL && ptr_h->next->next != NULL)
	{
		ptr_t = ptr_t->next;
		ptr_h = ptr_h->next->next;

		if (ptr_h == ptr_t)
		{
			ptr_t = (void *)head;
			while (ptr_t != ptr_h)
			{
				ptr_t = ptr_t->next;
				ptr_h = ptr_h->next;
			}
			return (ptr_h);
		}
	}

	return (NULL);
}
