#include "main.h"

/**
 * _isdigit - return 1 if integer is digit  otherwise return 0
 * @c: is the integer
 * Return: 1 if digit  otherwise return 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
