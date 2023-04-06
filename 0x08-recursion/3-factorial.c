#include "main.h"

/**
 * factorial - recursive function to return integer factorial
 * @n: input integer
 * Return: input integer factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
