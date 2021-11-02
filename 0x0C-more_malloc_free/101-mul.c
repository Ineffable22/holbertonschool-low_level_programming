#include <stdlib.h>
#include "main.h"

/**
 * _isdigit - checks if a string contains a non-digit char
 * @s: string to be evaluated
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int _isdigit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < 48 || s[i] > 57)
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * print - print Error, followed by a new line,
 * and exit with a status of 98
 */
void print(void)
{
	_putchar(69);
	_putchar(114);
	_putchar(114);
	_putchar(111);
	_putchar(114);
	_putchar(10);
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *num1, *num2;
	int len1, len2, len, i, carry, digit1, digit2, *mul, a = 0;

	num1 = argv[1], num2 = argv[2];
	if (argc != 3 || !_isdigit(num1) || !_isdigit(num2))
		print();
	len1 = _strlen(num1);
	len2 = _strlen(num2);
	len = len1 + len2;
	mul = malloc(sizeof(int) * len);
	if (mul == NULL)
		return (1);
	for (i = 0; i < len1 + len2; i++)
		mul[i] = 0;
	for (len1 = _strlen(num1) - 1; len1 >= 0; len1--)
	{
		digit1 = num1[len1] - '0';
		carry = 0;
		for (len2 = _strlen(num2) - 1; len2 >= 0; len2--)
		{
			digit2 = num2[len2] - '0';
			carry += mul[len1 + len2 + 1] + (digit1 * digit2);
			mul[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			mul[len1 + len2 + 1] += carry;
	}
	for (i = 0; i < len; i++)
	{
		if (mul[i])
			a = 1;
		if (a)
			_putchar(mul[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(mul);
	return (0);
}
