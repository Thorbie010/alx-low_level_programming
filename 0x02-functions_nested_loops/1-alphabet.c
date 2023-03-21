#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - check the  code
 * printing a...z
 * Return: nothing
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		_putchar(a);
	_putchar('\n');
}
