#include <stdio.h>
#include "main.h"
/**
 * main - prints the name of the program, followed new line
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	if (argc == 1)
		printf("%s\n", argv[0]);
	return (0);
}
