#include "main.h"
#include <stdlib.h>

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
 * checker - checks if a string contains a non-digit char
 * @n: string to be evaluated
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */
char checker(char *n)
{
	int i;

	for (i = 0; n[i]; i++)
	{
		if (n[i] < 48 || n[i] > 57)
			return (0);
	}
	return (1);

}
/**
 * _strlen - returns the length of a string
 * @n: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *n)
{
	int i = 0;

	while (n[i] != 0)
	{
		i++;
	}
	return (i);
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
	int i, len, len1, len2, *result, value, digit1, digit2, c = 0;
	char *n1, *n2;

	n1 = argv[1], n2 = argv[2];
	if (argc != 3 || !checker(n1) || !checker(n2))
		print();
	len1 = _strlen(n1), len2 = _strlen(n2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
	if (result == NULL)
		return (0);
	for (i = 0; i <= (len1 + len2); i++)
		result[i] = 0;
	for (len1 = (len1 - 1); len1 >= 0; len1--)
	{
		digit1 = n1[len1] - 48;
		value = 0;
		for (len2 = _strlen(n2) - 1; len2 >= 0; len2--)
		{
			digit2 = n2[len2] - 48;
			value += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = value % 10;
			value /= 10;
		}
		if (value > 0)
			result[len1 + len2 + 1] += value;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (result[i])
			c = 1;
		if (c)
			_putchar(result[i] + 48);
	}
	if (!c)
		_putchar(48);
	_putchar(10);
	free(result);
	return (0);
}
