#include "search_algos.h"
#include <math.h>

/**
 * printArray - print array
 * @array: pointer to the first element of the array
 * @start: index to start
 * @end: index to end
 *
 * Return: Nothing
 */
void printArray(int *array, size_t start, size_t end)
{
	size_t j = 0;

	printf("Searching in array: ");
	for (j = start; j <= end; j++)
	{
		printf("%d", array[j]);
		if (j != end)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
}

/**
 * exponential_search - Searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 * @array: is a pointer to the first element of the array to search
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: the first index where value is located
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t tmp = 1, start = 0, end = size - 1, mid = 0;

	if (array)
	{
		while (tmp < end)
		{
			start = tmp;
			printf("Value checked array[%ld] = [%d]\n", start, array[start]);
			tmp *= 2;
			if (array[start] <= value && array[start * 2] >= value)
				break;

		}
		printf("Value found between indexes [%ld] and [%ld]\n", start,
		       tmp < end ? tmp : end);
		while (start < end)
		{
			printArray(array, start, end);
			mid = (start + end) / 2;
			if (value == array[mid])
			{
				return (mid);
			}
			else if (value < array[mid])
				end = mid - 1;
			else if  (value > array[mid])
				start = mid + 1;
		}
		printArray(array, start, end);
		if (value == array[end])
			return (end);
	}
	return (-1);
}
