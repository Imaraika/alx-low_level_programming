#include <stdlib.h>
#include <string.h>

/**
 * create_array - creates an array of size size and initializes it with c
 * @size: the size of the array to be created
 * @c: the character to initialize the array with
 *
 * Return: If memory allocation fails, NULL. Otherwise, a pointer to the
 *         newly created array.
 */
char *create_array(unsigned int size, char c)
{
	char *arr;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(*arr) * size);
	if (arr == NULL)
		return (NULL);
	memset(arr, c, size);
	return (arr);
}

