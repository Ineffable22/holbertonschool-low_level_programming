#include "main.h"

/**
 * print_line - draws a straight line in the terminal,
 * followed by a new line
 * @n: number of times the characher _ should be printed
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar(95);
		n--;
	}
	_putchar(10);
}
