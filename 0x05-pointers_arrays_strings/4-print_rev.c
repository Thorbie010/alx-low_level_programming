#include "main.h"

/**
 * print_rev - function to print reverse of a string
 * @s: input string
 * Return: Nothing
 *
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '0')
		i++;

	while (i)
		_putchar(s[--i]);

	_putchar('\n');
}
