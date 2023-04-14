#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * _calloc - function that allocates memory for an array
 * @nmemb: array input
 * @size: array input size
 * Return: Null if (fail, size or nmemb = 0)
 * else return ptr to memory allocated 
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = (void *) malloc(nmemb * size);
		if (ptr == NULL)
			return (NULL);

	memset(ptr, 0, nmemb * size);
	return (ptr);
}
