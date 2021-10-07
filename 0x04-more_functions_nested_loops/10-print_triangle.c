#include "main.h"

/**
 * print_triangle -  prints a triangle, followed by a new line.
 * @size:  size of the triangle
 */

void print_triangle(int size)
{
	int num, size1, size2, size3;

	size1 = size;
	size2 = size;
	size3 = size;
	num = 1;
	if (size > 0)
	{
		while (size3 > 0)
		{
			size1 = size - num;
			size2 = size - size1;
			while (size1 > 0)
			{
				_putchar(32);
				size1--;
			}
			while (size2 > 0)
			{
				_putchar(35);
				size2--;
			}
			_putchar(10);
			num++;
			size3--;
		}
	}
	else
		_putchar(10);
}
