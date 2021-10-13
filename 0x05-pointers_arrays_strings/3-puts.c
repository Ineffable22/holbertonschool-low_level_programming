#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: pointer to the string to print
 */

void _puts(char *str)
{
	int x;

	x = 0;
	while (str[x] != 0)
	{
		_putchar(str[x]);
		x++;
	}
	_putchar(10);
}
