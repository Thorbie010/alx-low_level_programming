#include "main.h"

/**
 * print_sign - start here
 * @n: sign to be printed
 * Return: 1 or 0 or '-'1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
