#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line.
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list a;

	va_start(a, n);

	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(a, char *));
		if (i + 1 != n && separator)
			printf("%s", separator);
	}
	putchar(10);
}
