#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
int result, num1, num2;
char *end;

if (argc < 3 || argc > 3)
{
printf("Error\n");
return (1);
}

num1 = strtol(argv[1], &end, 10);
if (*end != '\0')  /* check for invalid input */
{
printf("Error: %s is not a valid integer\n", argv[1]);
return (1);
}

num2 = strtol(argv[2], &end, 10);
if (*end != '\0')  /* check for invalid input */
{
printf("Error: %s is not a valid integer\n", argv[2]);
return (1);
}

result = num1 *num2;

printf("%d\n", result);

return (0);
}
