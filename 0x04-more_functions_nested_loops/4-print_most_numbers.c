#include "main.h"

/**
 * print_most_numbers - print 0 to 9 excluding 2 and 4 then  new line
 *
 * Return: Nothing
 */
void print_most_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		if (c != '2' && c != '4')
			_putchar(c);
	}
	_putchar('\n');
}
