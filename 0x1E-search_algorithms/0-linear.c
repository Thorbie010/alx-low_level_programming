#include "search_algos.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * linear_search -  function that searches for a value in an array of integers
 * using the Linear search algorithm
 * @array:  is a pointer to the first element of the array to search in
 * @size:  is the number of elements in array
 * @value:  is the value to search for
 * Return: function must return the first index where value is located
 * If value is not present in array or if array is NULL.
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("value chacked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
