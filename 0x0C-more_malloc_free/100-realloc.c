#include <stdlib.h>
#include <string.h>
#include "main.h"

#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previsouly allocated by malloc
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the new memory block
 * Return: pointer to the newly allocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	/* If new size is zero, free the memory and return NULL */
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	/* If ptr is NULL, equivalent to malloc(new_size) */
	if (ptr == NULL)
	{
		return malloc(new_size);
	}

	/* Allocate new memory block */
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}

	/* Copy the contents of the old block to the new block */
	if (new_size < old_size)
	{
		memcpy(new_ptr, ptr, new_size);
	}
	else
	{
		memcpy(new_ptr, ptr, old_size);
	}

	/* Free the old block */
	free(ptr);
	return (new_ptr);
}
