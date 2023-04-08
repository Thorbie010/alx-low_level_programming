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
	if (argv[0])
		printf("%d\n", argc - 1);
	return (0);
}

