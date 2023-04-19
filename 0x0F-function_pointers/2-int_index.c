#include "[200~function_pointers.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * int_index - function that searches for an integer
 * @size: number of elements in the array array
 * @cmp: pointer to the function to be used to compare values
 * Return: i or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);

	for (; i < size; i++)
		if (cmp(array[i]) != 0)
			return (i);

	return (-1);
}
