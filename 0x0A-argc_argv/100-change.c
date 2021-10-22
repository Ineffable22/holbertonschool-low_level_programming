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
	int i, j, res, x, coins = 0;
	int typecoins[] = {25, 10, 5, 2, 1};

	if (argc == 2)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != 0; j++)
			{
				if ((argv[i][j] < 48 && argv[i][j] != 45) || argv[i][j] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
		}
		res = atoi(argv[1]);
		for (x = 0; x < 5 && res >= 0; x++)
		{
			while (res >= typecoins[x])
			{
				coins++;
				res -= typecoins[x];
			}
		}
		printf("%d\n", coins);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
