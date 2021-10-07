#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9
 * except 2 and 4, followed by a new line
 */

void print_most_numbers(void)
{
	int x;

	x = 48;
	while (x <= 57)
	{
		if (x != 50 && x != 52)
			_putchar(x);
		x++;
	}
	_putchar(10);
}
