#include <stdio.h>

/**
 * main - Entry point
 * printing 0-9 with commas
 * Return: Always 0 (Success)
 */
int main(void)
{
	int j;

	for (j = '0'; j <= '9'; j++)
	{
		putchar(j);
		if (j != '9')
			putchar(',');
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
