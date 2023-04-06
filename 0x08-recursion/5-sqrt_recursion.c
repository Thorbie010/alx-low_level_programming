#include "main.h"

/**
 * _sqrt_solver - calculate sqrt using binary search algorithm
 * @n: input integer from _sqrt_recuursion function
 * @upper: upper bound for possible root integer
 * @lower: lower bound for possible root integer
 * Return: value gotten from calcultaions
 */
int _sqrt_solver(int n, int lower, int upper)
{
	int middle = (upper + lower) / 2;
	int root = middle * middle;

	if (lower > upper)
		return (-1);
	if (root == n)
		return (middle);
	else if (root > n)
		return (_sqrt_solver(n, lower, middle - 1));
	else
		return (_sqrt_solver(n, middle + 1, upper));
}

/**
 * _sqrt_recursion - function to recursively calculate squareroot
 * @n: input integer
 * Return: square root of integer
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1 || n == 0)
		return (n);
	return (_sqrt_solver(n, 1, n / 2));
}

