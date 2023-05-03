#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i, j;
	char *result;

	len1 = s1 ? strlen(s1) : 0;
	len2 = s2 ? strlen(s2) : 0;

	if (n >= len2)
	{
		n = len2;
	}
	result = (char *) malloc(len1 + n + 1);

	if (!result)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		result[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		result[i + j] = s2[j];
	}
	result[i + j] = '\0';
	return (result);
}
