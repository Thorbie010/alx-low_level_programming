#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints number of arguments
 * @argc: number of arguments counted
 * @argv: argument strings
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i, j, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);

		result = i * j;

		printf("%d\n", result);
		return (0);
	}
}
