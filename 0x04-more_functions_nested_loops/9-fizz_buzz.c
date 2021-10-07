#include <stdio.h>

/**
 * main - print the numbers from 1 to 100, followed by a new line
 * but for multiples of three prints Fizz instead of the number
 * and for the multiples of five prints Buzz
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	n = 1;
	while (n <= 100)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			if (n % 3 == 0 && n % 5 == 0)
				printf("FizzBuzz ");
			else if (n % 3 == 0)
				printf("Fizz ");
			else if (n % 5 == 0)
				printf("Buzz ");
		}
		else
		{
			printf("%d ", n);
		}
		n++;
	}
	putchar(10);
	return (0);
}
