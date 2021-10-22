#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - prints the name of the program, followed new line
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, j, x, res, sum;

	if (argc > 0)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != 0; j++)
			{
				if (argv[i][j] < 48 || argv[i][j] > 57)
				{
					puts("Error");
					return (1);
				}
			}
		}
		for (x = 1; x < argc; x++)
		{
			res = atoi(*(argv + x));
			sum += res;
		}
		printf("%d\n", sum);
	}
	else
		printf("0\n");
	return (0);
}

