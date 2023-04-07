#include "main.h"
int _strlen(char *s);
/**
 * is_palindrome --> funnction to check string is palindrome
 * @s: input string
 * Return: if string is palindrome 1 otherwise 0
 */
int is_palindrome(char *s)
{
	int len = _strlen(s), i;
	
	for (i = 0; i < len / 2; i++)
	{
		if (s[i] != s[len - i - 1])
		{
			return (0);
		}
	}
	return (1);
}

/**
 * _strlen --> dunction to compute string lenght
 * @s: given string input
 * Return: string lenght
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen(s + 1) + 1);
}

