#include "main.h"

/**
 * _isupper - return 1 if integer is uppercase otherwise print 0
 * @c: is the integer
 * Return: 1 if upper case otherwise return 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
