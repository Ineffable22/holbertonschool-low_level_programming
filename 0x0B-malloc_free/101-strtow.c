#include "main.h"
#include <stdlib.h>
/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	int len1 = 0, len2 = 0, f, i, k = 0, start, end, m = 0;
	char **p, *q;

	if (str == NULL)
		return (NULL);
	while (*(str + len1))
	{
		if (*(str + len1) == 32)
		{
			f = 0;
		}
		else if (f == 0)
		{
			f = 1;
			len2++;
		}
		len1++;
	}
	
	if (len2  == 0)
		return (NULL);
	p = (char **) malloc(sizeof(char) * len2 + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; i <= len1; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (m)
			{
				end = i;
				q = (char *) malloc(sizeof(char) * (m + 1));
				if (q == NULL)
					return (NULL);
				while (start < end)
					*q++ = str[start++];
				*q = '\0';
				p[k] = q - m;
				k++;
				m = 0;
			}
		}
		else if (m++ == 0)
			start = i;
	}
	p[k] = NULL;
	return (p);
}
