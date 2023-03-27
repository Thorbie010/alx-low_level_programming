#include "main.h"

/**
 * _puts - Write a function that prints a string, followed
 * by a new line, to stdout.
 * @str: an input string
 * Return: Nothing
 */
void print_rev(char *s)
{
	int i = 0, j = 0;
	char rev;

	while (s[i] != '\0')
		i++;
	
	while (j < i--)
	{
		rev = s[j];
		s[j++] = s[i];
		s[i] = rev;
	}
}
