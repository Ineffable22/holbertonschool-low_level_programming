#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 * @n: print from this number
 */

void print_to_98(int n)
{
	if (n  <= 98)
	{
		while (n <= 98)
		{
			if (n != 98)
				printf("%d, ", n);
			else if (n == 98)
				printf("%d\n", n);
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			if (n > 99)
			{
				_putchar((n / 100) + 48);
				_putchar(((n / 10) % 10) + 48);
				_putchar((n % 10) + 48);
			}
			else
			{
				_putchar((n / 10) + 48);
				_putchar((n % 10) + 48);
			}
			if (n == 98)
				break;
			_putchar(44);
			_putchar(32);
			n--;
		}
		_putchar(10);
	}
}
