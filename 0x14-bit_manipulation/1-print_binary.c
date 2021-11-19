#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: value to raise
 * @y: power
 *
 * Return: result of the power
 */
unsigned long int _pow_recursion(unsigned long int x, unsigned long int y)
{
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
/**
 * print_binary - Prints the binary representation of a number.
 * @n: number to convert to binary
 */
void print_binary(unsigned long int n)
{
	long int i;
	unsigned long int variable = 0;

	while (n >= _pow_recursion(2, variable))
		variable++;
	if (n == 0)
		_putchar(48);
	for (i = variable - 1; i >= 0 && n <= _pow_recursion(2, 32); i--)
	{
		if (n == _pow_recursion(2, i))
		{
			_putchar(49);
			while (i > 0)
			{
				_putchar(48);
				(i--);
			}
			break;
		}
		if (n > _pow_recursion(2, i))
		{
			n = n - _pow_recursion(2, i);
			_putchar(49);
		}
		else
			_putchar(48);
	}
}
