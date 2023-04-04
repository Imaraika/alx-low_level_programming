#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: stored location
 *@src: the copied location
 *@n: number of bytes
 *
 *Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		*(dest + 1) = *(src + 1);
	}
	return (dest);
}
