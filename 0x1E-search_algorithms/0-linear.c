#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers using
 * the Linear search algorithm
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size && array[i] != value; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (i + 1 == size)
			return (-1);
	}
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	return (i);
}
