#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * *str_concat - function to concatenate two string
 * into a new string with a new memory
 * @s1: first string
 * @s2: second string
 * Return: pointer to new string
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	new_str = (char *) malloc(((strlen(s1)) + (strlen(s2))) + 1);
	if (new_str == NULL)
		return (NULL);

	strcpy(new_str, s1);
	strcat(new_str, s2);

	return (new_str);
}
