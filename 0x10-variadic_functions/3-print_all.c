#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *s, *separator = "";

	va_list p;

	va_start(p, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
			case 'c':
				printf("%s%c", separator, va_arg(p, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(p, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(p, double));
				break;
			case 's':
				s = va_arg(p, char *);
				if (!s)
					s = "(nil)";
				printf("%s%s", separator, s);
				break;
			default:
				i++;
				continue;
			}
			separator = ", ";
			i++;
		}
	}
	putchar(10);
	va_end(p);
}
