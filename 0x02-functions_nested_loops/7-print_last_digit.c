#include "main.h"

/**
 * print_last_digit - start here
 * @n: is the integer  on which the last digit check is carried out
 * Return: last digit
 */

int print_last_digit(int n)
{
	int  y;

	y = n % 10;
		if (y < 0)
		{
			y = -y;
		}
	_putchar(y + '0');
	return (y);
}
