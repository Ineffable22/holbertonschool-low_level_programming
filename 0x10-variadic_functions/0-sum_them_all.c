#include "variadic_functions.h"
/**
 * sum_them_all - sum of all its parameters
 * @n: number of parameters
 *
 * Return: return the sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int j;
	va_list a;

	va_start(a, n);

	for (i = 0, j = 0; i < n; i++)
	{
		j = j + va_arg(a, int);
	}
	return (j);
}
