#include "main.h"
#include <stdlib.h>
/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previsouly allocated by malloc
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the new memory block
 *
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1, *ptr2;
	unsigned int i, j;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr1 = malloc(new_size);

	if (ptr1 == NULL)
		return (NULL);

	ptr2 = ptr;
	if (new_size > old_size)
		j = old_size;
	if (new_size < old_size)
		j = new_size;

	for (i = 0; i < j; i++)
		ptr1[i] = ptr2[i];

	free(ptr);
	return (ptr1);
}
