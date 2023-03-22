#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - check description
 * @i: is equal to n input
 * @n: original input from user
 * Return: nothing
 */
void print_to_98(int n)
{
	int i = n

	if (i <= 98)
	{
		for (; i <= 98; i++)
		{
			printf("%d\n");

			if (i == 98)
		      		 continue;
			printf(", ");
		}
		printf("\n");
	}

	else
	{
		for (; i >= 98; i--)
		{
			printf("%d\n");
			if (i == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
}
