#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,except for the letter q and e
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x != 'q')
		{
			if (x != 'e')
			{
				putchar(x);
			}
		}
	}
	putchar('\n');
	return (0);
}
