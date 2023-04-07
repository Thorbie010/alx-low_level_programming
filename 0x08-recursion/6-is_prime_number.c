#include "main.h"

/**
 * check_primality - trial method for primality
 * @divisor: divisor
 * @n: integer that is been checked for primality
 * Return: if prime 1 otherwise 0
 */

int check_primality(int divisor, int n)
{
	if (n == divisor)
		return (1);
	else if ((n % divisor) == 0)
		return (0);
	else
		return (check_primality((divisor + 1), n));
}

/**
 * is_prime_number -function to check is a number is prime
 * @n: input integer for check
 * Return: if prime 1 otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (n == 2 || n == 3)
		return (1);
	else
		return (check_primality(2, n));
}
