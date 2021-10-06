#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to extract the last digit from
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	int mod;

	mod = n % 10;
	if (mod < 0)
		mod = -mod;
	_putchar(mod + '0');
	return (mod);
}
