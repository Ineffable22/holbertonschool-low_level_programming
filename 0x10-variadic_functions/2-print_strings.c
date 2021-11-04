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
	char *s;

	va_start(a, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(a, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (i + 1 != n && separator)
			printf("%s", separator);
	}
	putchar(10);
	va_end(a);
}
