#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */

void print_alphabet_x10(void)
{
	char ch;
	int n;

	n = 0;
	while (n < 10)
	{
		ch = 97;
		while (ch < 123)
		{
			_putchar(ch);
			ch++;
		}
		_putchar(10);
		n++;
	}
}
