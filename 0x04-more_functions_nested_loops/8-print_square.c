#include "main.h"

/**
 * print_square - prints a square, followed by a new line.
 * @size: is the size of the square
 */

void print_square(int size)
{
	int size1, size2;

	size2 = size;
	size1 = size;
	if (size > 0)
	{
		while (size1 > 0)
		{
			size2 = size;
			while (size2 > 0)
			{
				_putchar(35);
				size2--;
			}
			_putchar(10);
			size1--;
		}
	}
	else
		_putchar(10);
}
