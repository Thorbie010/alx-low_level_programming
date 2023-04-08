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
	long long int mul = 1;

	if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			mul *= atoll(argv[i]);
			i++;
		}
		printf("%lld\n", mul);
	}
	else if
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
