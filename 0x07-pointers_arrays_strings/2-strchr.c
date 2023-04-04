#include "main.h"
#include <stddef.h>
/**
 * _strchr - function that searches a string fora character
 * @s: string to be ssearched
 * @c: character been searched for
 * Return: first first occurence of character or Null if no occurence
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	for (; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (NULL);
}
