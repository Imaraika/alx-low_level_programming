#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	/* Check for zero size or nmemb */
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	/* Allocate memory using malloc */
	ptr = malloc(nmemb * size);

	/* Check if malloc failed */
	if (ptr == NULL)
	{
		return (NULL);
	}

	/* Zero out the memory using memset */
	memset(ptr, 0, nmemb * size);
	/* Return the pointer to the allocated memory */
	return (ptr);
}

