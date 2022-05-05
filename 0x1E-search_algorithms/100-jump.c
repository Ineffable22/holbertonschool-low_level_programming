#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers using
 * the Jump search algorithm
 * @array: is a pointer to the first element of the array to search
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: the first index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = 0;
	size_t i = 0;

	if (!array)
		return (-1);

	step = sqrt(size);
	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value >= array[i] && value <= array[i + step])
		{
			printf("Value found between indexes [%ld] and [%ld]\n"
			       , i, i + step);
			printf("Value checked array[%ld] = [%d]\n"
			       , i, array[i]);
			while (value >= array[i])
			{
				if (value == array[i])
					return (array[i]);
				i += 1;
				printf("Value checked array[%ld] = [%d]\n"
				       , i, array[i]);
			}
		}
		i += step;
	}
	i -= step;
	printf("Value found between indexes [%ld] and [%ld]\n"
	       , i, i + step);
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	return (-1);
}
