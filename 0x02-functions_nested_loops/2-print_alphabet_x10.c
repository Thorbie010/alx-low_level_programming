#include "main.h"

/**
 * print_alphabet_x10 - printing lowercase alphabet x10
 *
 * Return: Nothing
 */

void print_alphabet_x10(void)
{
	int c;
	char j;

	for (c = 0; c <= 9; c++)
	{
		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);
		_putchar('\n');

	}
}
