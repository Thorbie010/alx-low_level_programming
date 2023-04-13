#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *string_nconcat - function that concatenates two strings
 * @s1: first input string
 * @s2: second input string
 * @n: amount of bytes in s2 to be concatenated
 * Return: pointer to newly alloc space
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1 = strlen(s1);
	unsigned int l2 = strlen(s2);
	char *new_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n => l2)
		n = l2;

	new_str = (char *) malloc(l1 + 1 + n);
	if (new_str == NULL)
		return (NULL);

	strcpy(new_str, s1);
	strncat(new_str, s2, n);

	new_str[l1 + n] = '\0';

	return (new_str);
}
