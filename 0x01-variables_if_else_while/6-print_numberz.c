#include <stdio.h>

/**
 * main - Entry point
 * printing 0-9 without using char
 * Return: Always 0 (Success)
 */
int main(void)
{
	int r;

	for (r = '0';  r <= '9'; r++)
	{
		putchar(r);
	}
	putchar('\n');
	return (0);
}
