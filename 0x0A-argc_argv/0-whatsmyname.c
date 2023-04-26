#include <stdio.h>
#include "main.h"

/**
 * main - the name of the program printed
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	char *program_name = argv[0];

	printf("%s\n", program_name);
	return (0);
}
