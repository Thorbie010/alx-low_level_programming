#include "main.h"
#include "main1.h"

/**
 * print_number - a function that prints an integer.
 * print_int: Used to print an unsigned int
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


