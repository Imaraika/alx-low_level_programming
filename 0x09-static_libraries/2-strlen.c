#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int lngt = 0;

	while (*s != '\0')
	{
		lngt++;
		s++;
	}

	return (lngt);
}

