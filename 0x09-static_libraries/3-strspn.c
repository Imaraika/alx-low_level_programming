#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int sp;

	while (*s)
	{
		for (sp = 0; accept[sp]; sp++)
		{
			if (*s == accept[sp])
			{
				i++;
				break;
			}
			else if (accept[sp + 1] == '\0')
				return (i);
		}
		s++;
	}
	return (i);
}

