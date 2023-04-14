#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_range - function that creates an array of integers
 * @max: upper boundary of input integers
 * @min: lower boundary of input integers
 * Return: NULL if fail memory created if success
 */

int *array_range(int min, int max)
{
	int *array, size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = (int *) malloc(size * (sizeof(int)));
		if (array == NULL)
			return (NULL);

	for (i = 0; i < size; i++)
		array[i] = min + i;

	return (array);
}
