#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int n, m, p;

	n = 0;
	while (n <= 9)
	{
		m = 0;
		while (m <= 9)
		{
			p = m * n;
			if (p > 9)
			{
				_putchar(44);
				_putchar(32);
				_putchar((p / 10) + '0');
				_putchar((p % 10) + '0');
			}
			else
			{
				if (m != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(p + '0');
			}
			m++;
		}
		_putchar(10);
		n++;
	}
}
