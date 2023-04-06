#include "main.h"
/**
 * _strlen_recursion - this function Returns the length of a string.
 * @s: the string to be counted.
 *
 * Return: The length of the string.
 */

int _strlen_recursion(char *s)
{
int kara_word = 0;
	if (*s)
	{
		kara_word++;
		kara_word = kara_word + _strlen_recursion(s + 1);
	}
	return (kara_word);
}

