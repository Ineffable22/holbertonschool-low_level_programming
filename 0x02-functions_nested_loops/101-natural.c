#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples
 * of 3 or 5 below 1024
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, m;

	n = 0;
	m = 0;
	while (n < 1024)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			m = m + n;
		}
		n++;
	}
	printf("la suma total es: %d\n", m);
	return (0);
}
