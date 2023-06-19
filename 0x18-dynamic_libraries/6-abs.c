#include "main.h"

/**
 * _abs - computes absolute value of integer
 * @y: is integer
 * Return: absolut value of y
 */

int _abs(int y)
{
	if (y >= 0)
		return (y);
	else
		return (y * -1);
}
