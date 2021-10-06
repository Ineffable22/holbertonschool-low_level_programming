#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 */
void print_times_table(int n)
{
        int x, y, p;

	x= 0;
	if (n < 15 && n >= 0)
	{
		while (x <= n)
		{
			y = 0;
			while (y <= n)
			{
				p = x * y;
				if (p > 9)
				{
					_putchar(44);
					_putchar(32);
					if (p > 99)
					{
						_putchar((p / 100) + 48);
						_putchar(((p / 10) % 10) + 48);
						_putchar((p % 10) + 48);
					}
					else						
					{
						_putchar(32);
						_putchar((p / 10) + 48);
						_putchar((p % 10) + 48);
					}
				}
				else
				{
					if (y != 0)
					{
						_putchar(44);
						_putchar(32);
						_putchar(32);
						_putchar(32);
					}
					_putchar(p + 48);
				}
				y++;
			}
                _putchar(10);
                x++;
		}
	}
}
