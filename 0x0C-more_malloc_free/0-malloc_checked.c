#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 * Return: a pointer to the allocated memory
 * or terminates the program if allocation fails
 */

void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b); /* Allocate memory and store a pointer to it in ptr*/

if (ptr == NULL) { /* Check if allocation failed*/
fprintf(stderr, "ERROR: Failed to allocate memory.\n"); /* Print error message to stderr*/
exit(98); /* Terminate program with failure status*/
}

return ptr; /* Return pointer to allocated memory*/
}
