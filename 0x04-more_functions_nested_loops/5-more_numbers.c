#include "main.h"

/**
 * more_numbers - prints 10 times the numbers,
 * from 0 to 14, followe by a new line
 */

void more_numbers(void)
{
	int lines, num1, num2, digito1, digito2;

	lines = 0;
	while (lines < 10)
	{
		num1 = 0;
		while (num1 <= 14)
		{
			num2 = num1;
			if (num1 > 9)
			{
				digito1 = num1 / 10;
				digito2 = num1 % 10;
				num2 = digito2;
			_putchar((digito1) + 48);
			}
			_putchar((num2) + 48);
			num1++;
		}
		lines++;
		_putchar(10);
	}
}
