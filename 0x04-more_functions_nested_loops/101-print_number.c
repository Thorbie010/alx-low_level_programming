#include "main.h"
void print_int(int v);

/**
 * print_number - a function that prints an integer.
 * @n: An input integer
 * Return: Nothing
 */
void print_number(int n)
{
	if (n == 0)
		_putchar('0');
	else if (n < 0)
	{
		_putchar('-');
		print_int(n * -1);
	}
	else
		print_int(n);
}

/**
 * print_int - A function to priting n
 * @v: is the n input
 * Return: Nothing
 */
void print_int(int v)
{
	int i = 1000000000;

	for (; i >= 1; i /= 10)
		if (v / i != 0)
		{
			_putchar((v / i) % 10 + '0');
		}
}
