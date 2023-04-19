#include "function_pointers.h"

/**
 * array_iterator - function that  calls the function pointed to 
 * by the function pointer for each element of the array.
 * @array: A pointer to the first element of an array of integers.
 * @size: The number of elements in the array.
 * @action: A pointer to a function that takes an integer 
 * as a parameter and returns nothing. 
 * This function will be called on each element of the array.
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	for (; < size; i++)
		action(array[i]);
}
