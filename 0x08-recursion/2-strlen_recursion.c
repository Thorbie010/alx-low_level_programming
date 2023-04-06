#include "main.h"
/**
 * _strlen_recursion - recursive function that returns lenght of string
 * @s: input string
 * Return: 0 if string is empty otherwise return lenght of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}
