#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - duplicates a string
 * @str: pointer to the string to duplicate
 *
 * Return: pointer to the newly allocated string, or NULL on failure
 */
char *_strdup(char *str)
{
	size_t len;
	char *dup;

	if (str == NULL)
		return (NULL);

	len = strlen(str);

	dup = malloc(len + 1);
	if (dup == NULL)
		return (NULL);

	strcpy(dup, str);

	return (dup);
}

