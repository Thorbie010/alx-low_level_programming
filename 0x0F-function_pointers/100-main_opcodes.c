#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcode of own main function
 * @argc: argument count
 * @argv: array of arguments
 * Return: 1 or 2 on fail, 0 on success
 */
int main(int argc, char *argv[])
{
	int bytes, i;
	unsigned char *func_ptr;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		return (2);
	}
	func_ptr = (unsigned char *)main;
	for (i = 0; i < bytes; i++)
		printf("%02x", *(func_ptr + 1));
	
	printf("\n");
	return (0);
}
