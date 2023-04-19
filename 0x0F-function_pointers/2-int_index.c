#include "function_pointers.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * int_index - function that searches for an integer
 * @array: an array
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * Return: i or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);

	if (cmp == NULL || array == NULL)
		return (-1);
	
	for (; i < size; i++)
		if (cmp(array[i]) != 0)
			return (i);

	if (i == size)
		return (-1);

	return (-1);
}
