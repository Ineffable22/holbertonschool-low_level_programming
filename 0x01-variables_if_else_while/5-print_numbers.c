#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,except for the letter q and e
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;

	x = 48;
	while (x<58)
	{
		putchar(x);
		x++;
	}
	putchar (10);
	return (0);
}


