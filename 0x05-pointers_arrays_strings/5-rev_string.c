#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int x, y;
	char k;

	for (x = 0; s[x] != 0; x++)
	{}
	y = x - 1;
	for (x = 0; x < y / 2; x++)
	{
		k = s[x];
		s[x] = s[y];
		s[y] = k;
		y--;
	}
}
