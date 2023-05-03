#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	int *arr;
	int size, i;

	/* Check if min > max */
	if (min > max)
	{
		return (NULL);
	}
	/* Calculate the size of the array */
	size = max - min + 1;
	/* Allocate memory for the array */
	arr = (int *) malloc(size * sizeof(int));
	/* Check if malloc failed */
	if (arr == NULL)
	{
		return (NULL);
	}

	/* Fill the array with values from min to max */
	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}
	/* Return the pointer to the array */
	return (arr);
}

