#include "main.h"

/**
 * print_line - printing a dash for the value of input n
 * @n: is the input
 * Return: Nothing
 */

void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
