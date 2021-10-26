#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *p;
	int i;

	if (str == 0)
		return (NULL);

	for (i = 0; *(str + i) != 0; i++)
	{}

	p = malloc(sizeof(char) * i + 1);

	if (p == NULL)
		return (0);

	for (i = 0;  *(str + i) != 0; i++)
		*(p + i) = *(str + i);

	*(p + i) = 0;
	return (p);
}
