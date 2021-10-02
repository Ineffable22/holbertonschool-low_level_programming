#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */

int main(void)
{
	int x;
	int y;

	x = 48;
	y = 49;

	while (x < 58)
	{
		while (y < 58)
		{
			if (y > x)
			{
				putchar(x);
				putchar(y);
				if (x != 56 || y != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
			y++;
			}
		y = 49;
		x++;
	}
	putchar(10);
	return (0);
}
