#include "main.h"

/**
 *
 *
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
