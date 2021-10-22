#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - prints the name of the program, followed new line
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int mult, mult1, mult2;

	if (argc == 3)
	{
		mult1 = atoi(argv[1]);
		mult2 = atoi(argv[2]);
		mult = mult1 * mult2;
		printf("%d\n", mult);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
