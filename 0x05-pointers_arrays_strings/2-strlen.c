#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: string to evaluate
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int x;

	x = 0;
	while (s[x] != '\0')
		x++;
	return (x);
}
