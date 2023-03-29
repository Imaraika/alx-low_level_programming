#include "main.h"

/**
 * _islower - Program checks if character is in lowercase
 * @c: Is the character to be checked
 * Return: this returns 1
 */

int _islower(int c)
	{
		if (c >= 'a' && c <= 'z')
			return (1);
		else
			return (0);
	}
