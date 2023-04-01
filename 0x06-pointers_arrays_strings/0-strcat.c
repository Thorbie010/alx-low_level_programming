#include "main.h"

/**
 * _strcat --> function to concatrate two strings
 * @dest: one of the input strings
 * @src: the second input string
 * Return: returns the pointer to resulting string
 */
char *_strcat(char *dest, char *src)
{
	char *d = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest ='\0';
	return (d);

}
