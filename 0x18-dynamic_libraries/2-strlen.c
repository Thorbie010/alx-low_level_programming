#include "main.h"
#include <string.h>

/**
 * _strlen - function for comuputing lenght of a string input
 * @s: string input
 * Return: lenght of string input
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
