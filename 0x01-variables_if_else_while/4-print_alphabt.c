#include <stdio.h>

/**
 * main - Entry point
 *
 * * Return: Always 0 (Success)
 */
int main(void)
{

	char x, q, e;

	e = 'e';
	q = 'q';

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x != e && x != q)
			putchar(x);
	}
		putchar('\n');

	return (0);
}
