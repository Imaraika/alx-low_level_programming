
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int bts, i;
	char *array1;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bts = atoi(argv[1]);

	if (bts < 0)
	{
		printf("Error\n");
		exit(2);
	}

	array1 = (char *)main;

	for (i = 0; i < bts; i++)
		{
		if (i == bts - 1)
		{
			printf("%02hhx\n", array1[i]);
			break;
		}
		printf("%02hhx ", array1[i]);
		}
		return (0);
}


