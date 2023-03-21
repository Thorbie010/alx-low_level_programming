#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 * program that writes putcharbfollowed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[8] = "_putchar";
	int a;

	for (a = 0; a < 8; a++)
		_putchar(str[a]);
	_putchar('\n');

	return (0);
}
