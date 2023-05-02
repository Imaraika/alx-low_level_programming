#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int count = 0;
	int in_word = 0;

	while (*s)
	{
		if (*s == ' ')
			in_word = 0;
		else if (!in_word)
		{
			in_word = 1;
			count++;
		}
		s++;
	}

	return (count);
}

/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix;
	int words, word_len, i, j;

	if (str == NULL || *str == '\0')
		return (NULL);

	words = count_word(str);
	matrix = malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	i = 0;
	while (*str)
	{
		if (*str == ' ')
			str++;
		else
		{
			word_len = 0;
			while (*(str + word_len) != ' ' && *(str + word_len) != '\0')
				word_len++;
			matrix[i] = malloc(sizeof(char) * (word_len + 1));
			if (matrix[i] == NULL)
			{
				while (i--)
					free(matrix[i]);
				free(matrix);
				return (NULL);
			}
			for (j = 0; j < word_len; j++)
				matrix[i][j] = *(str++);
			matrix[i][j] = '\0';
			i++;
		}
	}
	matrix[i] = NULL;

	return (matrix);
}

