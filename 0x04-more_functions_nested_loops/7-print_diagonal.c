#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	int x, m;

	x = 0;
	if (n > 0)
	{
		while (n > 0)
		{
			m = n - x;
			while (m < n)
			{
				_putchar(32);
				m++;
			}
			_putchar(92);
			x++;
			n--;
			_putchar(10);
		}
	}
	else
		_putchar(10);
}
