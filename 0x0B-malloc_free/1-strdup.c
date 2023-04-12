#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 * *_strdup - function thet returns pointer
 * to newly allocated string
 * @str: string
 * Return: pointer to new string
 */

char *_strdup(char *str)
{
	char *new_str;

	if (str == NULL)
		return (NULL);

	new_str = (char *) malloc(strlen(str) + 1);

	if (new_str == NULL)
		return (NULL);

	strcpy(new_str, str);

	return (new_str);
}
