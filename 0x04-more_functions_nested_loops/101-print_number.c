#include "main.h"

/**
 * print_number - prints an integer
 *
 */

void print_number(int n)
{
	if (n < 0)
	{
		n = -n;
		_putchar(45);
	}
	if (n > 999 || n < -999)
		_putchar((n / 1000) + 48);
	if (n > 99 || n < -99)
		_putchar(((n / 100) % 10) + 48);
	if  (n > 9 || n < -9)
		_putchar(((n / 10) % 10) + 48);
	_putchar(n % 10 + 48);
}
