#include "main.h"

int check_palindrome(char *s, int lenght);
int _strlen(char *s);
/**
 * is_palindrome --> funnction to check string is palindrome
 * @s: input string
 * Return: if string is palindrome 1 otherwise 0
 */
int is_palindrome(char *s)
{
	int lenght;

	lenght = _strlen(s);
	if (lenght <= 1)
		return (1);
	return (check_palindrome(s, lenght));
}

/**
 * check_palindrome - A function with a revesed string
 * @s: An input string
 * @lenght: the length of the string s
 * Return: A reverse string
 */
int check_palindrome(char *s, int lenght)
{
	if (*s != *(s + lenght - 1))
		return (0);
	else if (lenght <= 1)
		return (1);
	else
		return (check_palindrome(s + 1, lenght - 2));

}


/**
 * _strlen --> dunction to compute string lenght
 * @s: given string input
 * Return: string lenght
 */
int _strlen(char *s)
{
	if (!*s)
		return (0);
	return (_strlen(s + 1) + 1);
}
