#include "search_algos.h"
#include <math.h>

/**
 * jump_list - searches for a value in a sorted list of integers using
 * the Jump search algorithm
 * @list: is a pointer to the first element of the array to search
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: the first index where value is located
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step = 0, i = 0, j = 0;
	listint_t *tmp = NULL;

	if (list && size > 0)
	{
		step = sqrt(size);
		while (j < size && value > list->n && list->next)
		{
			i = j;
			tmp = list;
			for (j = i; j < i + step && list->next; j++, list = list->next)
			{}
			printf("Value checked array[%ld] = [%d]\n", list->index,
			       list ? list->n : 99);
		}
		printf("Value found between indexes [%ld] and [%ld]\n", i, j);
		list = tmp;
		while (i < size)
		{
			printf("Value checked array[%ld] = [%d]\n", list->index, list->n);
			if (value == list->n)
				return (list);
			i += 1;
			list = list->next;
		}
	}
	return (NULL);
}
