#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;

	x = 122;
	while (x >= 97)
	{
		putchar(x);
		x--;
	}
	putchar (10);
	return (0);
}
