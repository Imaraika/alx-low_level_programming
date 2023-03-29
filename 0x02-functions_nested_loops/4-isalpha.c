#include "main.h"

/**
 * _isalpha - Is a program that checks for alphabetic character
 * @c: the character to be checked
 * Return: it returns 1 if @c is a letter, and 0 if itsn't
 */
	int _isalpha(int c)
	{
		return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
	}
