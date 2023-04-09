#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - program that adds argument values
 * @argc: number of arguments counted
 * @argv: argument values
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 1;
	int add = 0;
	int j, num;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (i < argc)
	{
		char *arg = argv[i];

		j = 0;
		while (arg[j])
		{
			if (!isdigit(arg[j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		num = atoi(arg);
		add += num;
		i++;
	}
	printf("%d\n", add);
	return (0);
}
