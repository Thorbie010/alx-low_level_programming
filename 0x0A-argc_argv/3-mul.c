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
	int i;
	long double mul = 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
			mul *= atoi(argv[i]);

		printf("%Lf\n", mul);
	}
	return (0);
}
