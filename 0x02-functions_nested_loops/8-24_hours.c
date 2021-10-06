#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 */

void jack_bauer(void)
{
	int x, y;

	x = 0;
	while (x <= 23)
	{
		y = 0;
		while (y <= 59)
		{
			_putchar((x / 10) + 48);
			_putchar((x % 10) + 48);
			_putchar(58);
			_putchar((y / 10) + 48);
			_putchar((y % 10) + 48);
			_putchar(10);
			y++;
		}
		x++;
	}
}
