#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 */

void print_alphabet(void)
{
	char ch;

	ch = 97;
	while (ch < 123)
	{
		_putchar(ch);
		ch++;
	}
	_putchar(10);
}
