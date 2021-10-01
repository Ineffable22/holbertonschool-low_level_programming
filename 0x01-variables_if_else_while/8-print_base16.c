#include <stdio.h>

/**
 * main - print all the numbers of base 16 in lowercase
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;

	x = 48;
	while (x <= 102)
	{
		if (x <= 57 || x >= 97)
		{
			putchar (x);
			x++;
		}
		else
			x++;
	}
	putchar (10);
	return (0);
}
