#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints string buffer
 * @b: the buffer
 * @size: size of buffer to print
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int num = 0, x = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	for (num = 0; num < size ; num += 10)
	{
		printf("%08x: ", num);
		for (; x < num + 10; x++)
		{
			if (x < size)
				printf("%02x", *(b + x));
			else
				printf("  ");
			if ((x - 1) % 2 == 0)
				putchar(32);
		}
		for (x = x - 10; x < num + 10 && (x < size); x++)
		{
			if (*(b + x) < 32 || *(b + x) > 126)
				*(b + x) = 46;
			printf("%c", b[x]);
		}
		putchar(10);
	}
}
