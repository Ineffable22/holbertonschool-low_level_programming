#include "main.h"
int prime(int n, int i);
/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to evaluate
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, 2));
}
/**
 * prime - calculates if a number is prime recursively
 * @n: number to evaluate
 * @i: iterator
 * Return: 1 if n is prime number, 0 if not
 */
int prime(int n, int i)
{
	if (n % i == 0 && n == i)
		return (1);
	if (n % i == 0 && n != i)
		return (0);
	return (prime(n, i + 1));
}
