#include <stdio.h>
#include <stdlib.h>

int _isdigit(char *s);
int _strlen(char *s);
void _puts(char *s);
void multiply(char *num1, char *num2);

/**
 * main - multiplies two positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, 98 on failure
 */

int main(int argc, char **argv)
	char *num1, *num2;

if (argc != 3)
{
	_puts("Error");
	return (98);
}

if (!_isdigit(argv[1]) || !_isdigit(argv[2]))
{
	_puts("Error");
	return (98);
}
num1 = argv[1];
num2 = argv[2];
multiply(num1, num2);
return (0);
}

/**
 * multiply - multiplies two positive numbers
 * @num1: first number
 * @num2: second number
 * Return: nothing
 */

void multiply(char *num1, char *num2)
{
	int len1 = _strlen(num1);
	int len2 = _strlen(num2);
	int *result = calloc(len1 + len2, sizeof(int));
	int i, j, carry, digit1, digit2, temp;
	(i = len1 - 1; i >= 0; i--)
		carry = 0;
	digit1 = num1[i] - '0';
	for (j = len2 - 1; j >= 0; j--)
	{
		digit2 = num2[j] - '0';
		temp = digit1 * digit2 + carry + result[i + j + 1];
		result[i + j + 1] = temp % 10;
		carry = temp / 10;
	}
	result[i + j + 1] += carry;
}

i = 0;

while (i < len1 + len2 && result[i] == 0)
	i++;
if (i == len1 + len2)
{
	for (; i < len1 + len2; i++)
		putchar(result[i] + '0');
}

    putchar('\n');

    free(result);
}

/**
 * _isdigit - checks if a string is composed of digits
 * @s: string to check
 *
 * Return: 1 if true, 0 if false
 */
int _isdigit(char *s)
{
    int i;

    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] < '0' || s[i] > '9')
            return (0);
    }

    return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string to check
 *
 * Return: length of string
 */
int _strlen(char *s)
{
    int i;

    for (i = 0; s[i] != '\0'; i++)
        ;

    return (i);
}

/**
 * _puts - prints a string to stdout
 * @s: string to print
 *
 * Return: nothing
 */
void _puts(char *s)
{
    int i;

    for (i = 0; s[i] != '\0'; i++)
        putchar(s[i]);

    putchar('\n');
}

