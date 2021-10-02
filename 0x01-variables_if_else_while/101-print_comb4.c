
#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: ALways 0 (Success)
 */

int main(void)
{
	int x;
	int y;
	int z;

	x = 48;
	y = 48;
	z = 49;

	while (x < 58)
	{
		while (y < 58)
		{
			while (z < 58)
			{
				if (z > y && y > x)
				{
					putchar(x);
					putchar(y);
					putchar(z);
					if (x != 55 || y != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
				z++;
			}
			z = 49;
			y++;
		}
		y = 49;
		x++;
	}
	putchar(10);
	return (0);
}

