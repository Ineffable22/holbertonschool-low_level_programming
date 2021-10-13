#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string
 * followed by a new line
 * @str: string to print the chars from
 */
void puts2(char *str)
{
	int x;

	for (x = 0; str[x] != 0; x++)
	{
		_putchar(str[x]);
		x++;
	}
	_putchar(10);
}
