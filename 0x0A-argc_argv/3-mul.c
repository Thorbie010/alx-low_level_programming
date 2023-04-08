#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints number of arguments
 * @argc: number of arguments counted
 * @argv: argument strings
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			mul *= atoi(argv[i]);
			i++;
		}
		printf("%d\n", mul);
	}
	else if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
