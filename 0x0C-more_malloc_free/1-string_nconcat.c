#include "main.h"
#include <stdlib.h>
/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;
	char *p;

	for (len1 = 0; s1 && *(s1 + len1) != 0; len1++)
	{}
	for (len2 = 0; s2 && *(s2 + len2) != 0; len2++)
	{}

	if (n < len2)
	{
		p = malloc(sizeof(char) * (len1 + n + 1));

		if (p == NULL)
			return (NULL);
		
		while (i < (len1 + n))
		{
			p[i] = s2[j];
			i++;
			j++;
		}
	}
	else
	{
		p = malloc(sizeof(char) * (len1 + len2 + 1));

		if (p == NULL)
			return (NULL);
		
		while (i < (len1 + len2))
			p[i++] = s2[j++];
	}

	*(p + len1 + n) = 0;

	return (p);
}
