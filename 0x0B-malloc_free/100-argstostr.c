#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments passed to the program
 *             into a string separated by newlines
 * @ac: the number of arguments passed
 * @av: a pointer to an array of pointers to the arguments
 *
 * Return: If ac == 0, av == NULL, or the function fails - NULL.
 *         Otherwise - a pointer to the new string.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	size_t len = 0;
	int i, j, k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate length of resulting string */
	for (i = 0; i < ac; i++)
	{
		if (av[i])
			len += strlen(av[i]);
		len++; /* add space for newline */
	}

	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);

	/* Concatenate strings into one string */
	for (i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			continue;
		for (j = 0; av[i][j]; j++)
			str[k++] = av[i][j];
		str[k++] = '\n';
	}
	str[k] = '\0';

	return (str);
}

