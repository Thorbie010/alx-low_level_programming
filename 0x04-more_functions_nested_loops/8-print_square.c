#include "main.h"

/**
 * print_square - printing # to represent a square
 * for value of input
 * @size: is the input
 * Return: Nothing
 */
void print_square(int size)
{
	int i, c;

	if (size > 0)
	{
		for (c = 0; c < size; c++)
		{
			for (i = 0; i < size; i++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
