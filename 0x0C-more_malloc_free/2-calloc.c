#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
    void *ptr;

    /* Check for zero size or nmemb */
    if (nmemb == 0 || size == 0) {
        return NULL;
    }

    /* Allocate memory using malloc */
    ptr = malloc(nmemb * size);

    /* Check if malloc failed */
    if (ptr == NULL) {
        return (NULL);
    }

    /* Zero out the memory using memset */
    memset(ptr, 0, nmemb * size);

    /* Return the pointer to the allocated memory */
    return (ptr);
}

