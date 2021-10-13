#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	char k;
	int x, y, z;

	x = 0;
	y = 0;
	while (s[x] != 0)
	{
		x++;
	}
	y = x - 1;
	for (z = 0; z < x / 2; z++)
	{
		k = s[z];
		s[z] = s[y];
		s[y--] = k;
	}
}
