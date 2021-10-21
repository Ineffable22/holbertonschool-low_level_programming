#include "main.h"
int len(char *s);
int check(char *s, int i, int j);
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check(s, 0, len(s)));
}
/**
 * len - returns the length of a string
 * @s: string to calculate the length of
 * Return: length of the string
 */
int len(char *s)
{

	if (*s == 0)
		return (0);
	return (1 + len(s + 1));
}
/**
 * check - checks the characters
 * @s: string to check
 * @i: iterator
 * @j: length of the string
 * Return: 1 if palindrome, 0 if not
 */
int check(char *s, int i, int j)
{
	if (*(s + i) != *(s + j - 1))
		return (0);
	if (i == j || i + 1 == j)
		return (1);
	return (check(s, i + 1, j - 1));
}
