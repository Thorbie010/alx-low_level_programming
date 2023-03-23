#include "main.h"

/**
 * more_numbers - print 0 to 14 on 10 new lines
 *
 * Return: Nothing
 */
void more_numbers(void)
{
	int c, h;

	for (c = 0; c < 10; c++)
	{
		for (h = 0; h <= 14; h++)
		{
			if (h > 9)
				_putchar(h / 10 + '0');
			_putchar(h % 10 + '0');
		}
		_putchar('\n');
	}
}
