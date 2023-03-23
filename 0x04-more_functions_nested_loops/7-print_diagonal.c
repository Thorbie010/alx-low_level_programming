#include "main.h"

/**
 * print_line - printing a whitespace for the value of input n
 * followed by a \
 * @n: is the input
 * Return: Nothing
 */

void print_diagonal(int n)
{
	int i = 0, f;

	if (n > 0)
	{
		for (; i < n; i++)
		{
			for (f = 0; f < i; f++)
				_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
	else
		_putchar('\n');
}
