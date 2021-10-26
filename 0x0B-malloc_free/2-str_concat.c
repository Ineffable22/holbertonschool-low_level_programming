#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 *
 * Return: pointer to the new string created (Success), or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, len1, len2;
	char *p;

	for (len1 = 0; s1 && *(s1 + len1) != 0; len1++)
	{}
	for (len2 = 0; s2 && *(s2 + len2) != 0; len2++)
	{}

	p = malloc(sizeof(char) * (len1 + len2 + 1));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		*(p + i) = *(s1 + i);

	for (j = 0; j < len2; j++)
		*(p + i + j) = *(s2 + j);

	*(p + i + j) = 0;

	return (p);
}
