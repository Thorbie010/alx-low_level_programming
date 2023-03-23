#include "main.h"

/**
 * print_numbers - print numbers from 0 to 9 followed by new line
 *
 * Return: Nothing
 */
void print_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
		_putchar(c);
	_putchar('\n');
}
