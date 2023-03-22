#include "main.h"

/**
 * _islower - start here
 * @c: check c
 * program to check if c is a lowercase or uppercase letter
 * Return: 1 or 0 (Success)
 */
int _islower(int c)
{


	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
