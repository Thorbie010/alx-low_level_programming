#include "main.h"

/**
 * print_line - printing a whitespace for the value of input n
 * followed by a \
 * @n: is the input
 * Return: Nothing
 */

void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (; i < n; i++)
			_putchar(' ');
	}
	_putchar(98);
	_putchar('\n');
}
