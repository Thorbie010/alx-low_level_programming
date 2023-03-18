#include <stdio.h>

/**
 * main - Entry point
 * printing base 16 numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, d;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (d = 'a'; d <= 'f'; d++)
		putchar(d);
	putchar('\n');
	return (0);
}
