#include "3-calc.h"
/**
 * main - program that perfroms simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, j, res;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	i = atoi(argv[1]);
	j = atoi(argv[3]);

	if ((*argv[2] == '/' || *argv[2] == '%') && j == 0)
	{
		printf("Error\n");
		exit(100);
	}
	res = (get_op_func(argv[2]))(i, j);
	printf("%d\n", res);
	return (0);
}
