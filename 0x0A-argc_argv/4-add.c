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
	int i, add = 0;

	while (argc-- > 1)
	{
		for (i = 0; (i < argv[argc][i]) != '\0'; i++)
		{
			if (isdigit(argv[argc][i]))
			{
				add += atoi(&argv[argc][i]);
				break;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", add);
	return (0);
}
