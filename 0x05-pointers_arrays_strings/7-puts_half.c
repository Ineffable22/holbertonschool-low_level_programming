#include "main.h"
/**
 * puts_half - prints half of a string
 * followed by a new line
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int x, y;

	for (x = 0; str[x] != 0; x++)
	{}
	y = x;
	if (y % 2 == 0)
		y = x / 2;
	else
		y = (x - 1) / 2;
	while (y <= x)
	{
		_putchar(str[y]);
		y++;
	}
	_putchar(10);
}
