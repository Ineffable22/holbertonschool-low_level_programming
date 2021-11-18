#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: value to raise
 * @y: power
 *
 * Return: result of the power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
/**
 * _strlen - returns the length of a string.
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(const char *s)
{
	int x;

	x = 0;
	while (s[x] != '\0')
		x++;
	return (x);
}
/**
 * checker - check the numbers.
 * @b: string to evaluate
 *
 * Return: 1 if everything is fine otherwise 0
 */
int checker(const char *b)
{
	int i;

	for (i = 0; *(b + i); i++)
	{
		if (*(b + i) != '1' && *(b + i) != '0')
			return (0);
	}
	return (1);
}
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: is pointing to a string of 0 and 1 chars
 *
 * Return: 1 if everything is fine otherwise 0
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int result = 0, value = 0;

	if (!b || !(*b))
		return (0);
	if (checker(b) == 0)
		return (0);
	for (i = _strlen(b) - 1; i >= 0; i--)
	{
		if (*(b + i) == '1')
			result += _pow_recursion(2, value);
		value++;
	}
	return (result);
}
