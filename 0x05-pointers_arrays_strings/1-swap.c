#include "main.h"
#include <stdio.h>

/**
 * swap_int - function to swap two integers
 * @a: 1st input integer
 * @b: 2nd input integer
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
