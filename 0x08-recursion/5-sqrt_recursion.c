#include "main.h"
int natural(int n, int a);
/**
 * _sqrt_recursion - returns the natural square root of a number
 * natural - recurses to find the natural
 * @n: number to calculate the square root of
 * Return: the resulting square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (natural(n, 1));
}

/**
 * natural - recurses to find the natural
 * @n: number to calculate the square root of
 * @i: iterator
 * Return: the resulting square root
 */
int natural(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (natural(n, i + 1));
}
