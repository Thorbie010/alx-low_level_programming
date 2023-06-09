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
	int i, add = 0, j;
	
	if (argc < 2)
	{
		printf("%d\n", add);
		return 0;
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return 1;
			}
		}
		add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
