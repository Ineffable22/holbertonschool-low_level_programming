#include "search_algos.h"

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
 * advanced_binary - searches for a value in an array of integers using
 * the Corrected Linear search algorithm corrected
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the first index where value is located
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t start = 0, end = size - 1, mid = 0;

	if (array && size > 0)
	{
		while (start < end)
		{
			mid = (start + end) / 2;
			printArray(array, start, end);
			if (value == array[mid] &&
			    (array[mid - 1] != value))
				return (mid);
			else if (value <= array[mid])
				end = mid;
			else if  (value > array[mid])
				start = mid + 1;
		}
		printArray(array, start, end);
		if (value == array[end])
			return (end);
	}
	return (-1);
}
