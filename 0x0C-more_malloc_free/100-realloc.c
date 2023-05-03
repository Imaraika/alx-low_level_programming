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
    unsigned int copy_size;
    
    /* If new_size is zero, free the memory block and return NULL */
    if (new_size == 0) {
        free(ptr);
        return NULL;
    }
    
    /* If ptr is NULL, allocate a new memory block with malloc */
    if (ptr == NULL) {
        new_ptr = malloc(new_size);
        return new_ptr;
    }
    
    /* If new_size is equal to old_size, do nothing and return ptr */
    if (new_size == old_size) {
        return ptr;
    }
    
    /* Allocate a new memory block with malloc */
    new_ptr = malloc(new_size);
   
    /* Determine the size to copy */
    copy_size = old_size < new_size ? old_size : new_size;
    
    /* Copy the contents of the old memory block to the new memory block */
    memcpy(new_ptr, ptr, copy_size);
    
    /* Free the old memory block */
    free(ptr);
    
    return new_ptr;
}

