#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * *create_array - function to createan array
 * @size: sife of the array
 * @c: char value
 * Return: return pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int j;

	if (size == 0)
		return (NULL);

	arr = (char *) malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	else
	{
		j = 0;
		while (j < size)
		{
			arr[j] = c;
			j++;
		}
	}
	return (arr);
}
