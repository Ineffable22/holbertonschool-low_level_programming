#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of the number
 * 612852475143, followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long int num, m, result;

	num = 612852475143;
	m = 2;
	while (num != m)
	{
		if (num % m == 0)
		{
			result = (num / m);
			if (result != 1)
				num = result;
		}
		else
			m++;
	}
	printf("%ld", num);
	putchar(10);
	return (0);
}
