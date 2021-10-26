#include "main.h"
#include <stdlib.h>
/**
 * *argstostr - concatenates all the arguments of the program
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: Pointer to the new string (Success), NULL (Error)
 */
char *argstostr(int ac, char **av)
{
	int len = 0, i = 0, j = 0, count = 0;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != 0; j++)
		{
			len++;
		}
		len++;
	}
	p = malloc(sizeof(char) * (len + 1));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != 0; j++)
		{
			p[count] = av[i][j];
			count++;
		}
		p[count] = 10;
		count++;
	}
	return (p);
}
