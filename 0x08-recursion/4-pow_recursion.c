#include "main.h"

/**
 * _pow_recursion - recursive fuction taht raises to power
 * @x: input base integer
 * @y: Inpute power integer
 * Return: value for calculations
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (_pow_recursion(x, y - 1) * x);
}
