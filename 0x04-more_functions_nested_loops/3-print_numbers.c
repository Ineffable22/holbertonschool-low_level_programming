#include "main.h"

/**
 * print_numbers - prints the numbers from 0 to 9
 * followed by a new line
 */

void print_numbers(void)
{
	int x;

	x = 48;
	while (x <= 57)
	{
		_putchar(x);
		x++;
	}
	_putchar(10);
}
